//
//  HeroBehaviorComponent.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "HeroBehaviorComponent.hpp"

void HeroBehaviorComponent::update()
{
    if (InputManager::controller.back) {
        printf("Moving Back");
        this->y+=10;
    }
}
