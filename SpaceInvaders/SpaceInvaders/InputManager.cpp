//
//  InputManager.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "InputManager.hpp"
SDL_Event e;
Controller InputManager::controller;
void InputManager::update()
{
    while (SDL_PollEvent(&e) != 0)
    {
        
        switch (e.type)
        {
                
            case SDL_WINDOWEVENT:
                switch (e.window.event) {
                    case SDL_WINDOWEVENT_FOCUS_GAINED:
                                               break;
                    default :
                        break;
                }
                break;
            case SDL_QUIT:
                
                break;
            case SDL_KEYDOWN:
                switch (e.key.keysym.sym)
            {
                case SDLK_RETURN:
                    break;
                case SDLK_2:
                    break;
                case SDLK_1:
                    break;
                case SDLK_UP:
                case SDLK_w:
                    break;
                case SDLK_DOWN:
                case SDLK_s:
                    controller.back = true;
                    break;
                case SDLK_LEFT:
                case SDLK_a:
                    break;
                case SDLK_RIGHT:
                case SDLK_d:
                    break;
                case SDLK_SPACE:
                    break;
                case SDLK_m:
                    break;
                default:
                    break;
            }
                break; 
            case SDL_MOUSEBUTTONDOWN:
                break;
            case SDL_MOUSEBUTTONUP:
                break;
            default:
                controller.back = false;
                break;
        }
    }
}