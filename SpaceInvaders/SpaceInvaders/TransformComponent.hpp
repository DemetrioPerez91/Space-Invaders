//
//  TransformComponent.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef TransformComponent_hpp
#define TransformComponent_hpp

#include <stdio.h>
#include "GameComponent.h"
struct Position
{
    float x = 0.0f;
    float y = 0.0f;
    
};
class  TransformComponent: public GameComponent
{
    Position position;
    void start();
    void update();
    
};

#endif /* TransformComponent_hpp */
