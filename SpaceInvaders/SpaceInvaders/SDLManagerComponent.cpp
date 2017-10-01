//
//  SDLManagerComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//



//SDL wrapper dedicatied to run all operations related to SDL


#include "SDLManagerComponent.hpp"


SDL_Window * SDLManagerComponent::window;
SDL_Renderer * SDLManagerComponent::renderer;
SDL_Surface * SDLManagerComponent::screen;
void SDLManagerComponent::start(){
    
    if(initSDL()){
        if(createWindow())
        {
            if(createRenderer())
            {
                if(createScreen())
                {
                    printf("SDL successfully initiated!\n");
                }
            }
        }
    }
}

bool SDLManagerComponent::initSDL()
{
    bool success = true;
    if (SDL_Init(SDL_INIT_TIMER)<0)
    {
        success = false;
        return success;
    }
    else
    {
        if (SDL_Init(SDL_INIT_VIDEO)<0)
        {
            success = false;
            return success;
        }
    }
    return  success;
}

bool SDLManagerComponent::createWindow()
{
    
    bool success = true;
    window = SDL_CreateWindow("2-Deme Engine",
                               SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
                               SCREEN_W , SCREEN_H,
                               SDL_WINDOW_SHOWN);
    if (window == NULL)
    {
        success = false;
        return success;
    }
    return success;
}

bool SDLManagerComponent::createRenderer()
{
    bool success = true;
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    if (renderer == NULL)
    {
        
        success = false;
        return success;
    }
    else
    {
        SDL_SetRenderDrawColor(renderer, 104, 48, 48, 0);
        int imgFlags = IMG_INIT_PNG;
        if (!IMG_Init(imgFlags)&imgFlags)
        {
            success = false;
            return success;
        }
    }
    return success;
}

bool SDLManagerComponent::createScreen()
{
    bool success = true;
    screen = SDL_GetWindowSurface(window);
    if (screen == NULL)
    {
        printf("SDL ERROR %s \n", SDL_GetError());
        success = false;
        return success;
    }
    return success;
}

void SDLManagerComponent::present()
{
    SDL_RenderPresent(renderer);
}
void SDLManagerComponent::clear()
{
    SDL_RenderClear(renderer);
}

void SDLManagerComponent::addTexture(SDL_Texture  * texture,SDL_Rect * srcRect,SDL_Rect * destRect)
{
    SDL_RenderCopy(renderer, texture, srcRect,destRect);
}

SDL_Texture* SDLManagerComponent::loadTexture( std::string path )
{
    //The final texture
    SDL_Texture* newTexture = NULL;
    
    //Load image at specified path
    SDL_Surface* loadedSurface = IMG_Load( path.c_str() );
    if( loadedSurface == NULL )
    {
        printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
    }
    else
    {
        //Create texture from surface pixels
        newTexture = SDL_CreateTextureFromSurface( renderer, loadedSurface );
        if( newTexture == NULL )
        {
            printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
        }
        
        //Get rid of old loaded surface
        SDL_FreeSurface( loadedSurface );
    }
    
    return newTexture;
}


