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
    src->h = height;
    src->w = width;
    src->x = 0;
    src->y = 0;
    textTure = SDLManagerComponent::loadTexture(resourceURL);
    renderer = SDLManagerComponent::renderer;
}

void SpriteComponent::update()
{
    updateDest();
    SDLManagerComponent::addTexture(textTure, src, dest);
}

void SpriteComponent::updateDest()
{
    dest->h = height;
    dest->w = width;
    dest->x = x;
    dest->y = y;
}
