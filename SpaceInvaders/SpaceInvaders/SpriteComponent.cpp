//
//  SpriteComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "SpriteComponent.hpp"


void SpriteComponent::start()
{
    dest = new SDL_Rect();
    src = new SDL_Rect();
    renderer = SDLManagerComponent::renderer;
}

void SpriteComponent::update()
{
    printf("SRPITE COMPONENT\n");
    updateDest();
    SDLManagerComponent::addTexture(textTure, src, dest);
}

void SpriteComponent::updateDest()
{
    dest->h = height;
    dest->w = width;
    dest->x = x;
    dest->y = y;
    
    printf("My x position is: %d",dest->x);
}
