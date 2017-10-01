//
//  EnemyBehaviorComponent.hpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef EnemyBehaviorComponent_hpp
#define EnemyBehaviorComponent_hpp

#include <stdio.h>
#include "GameComponent.h"


class EnemyBehaviorComponent: public GameComponent, public PositionInterface
{
    void start(){}
    void update();
};



#endif /* EnemyBehaviorComponent_hpp */
