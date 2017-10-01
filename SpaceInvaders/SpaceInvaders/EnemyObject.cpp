//
//  EnemyObject.cpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "EnemyObject.hpp"

void EnemyObject::update()
{
    int first = 0;
    int last = int(components.size() );
    while (first != last)
    {
        GameComponent * component = components.at(first);

        if( SpriteComponent * positionComponent = dynamic_cast< SpriteComponent* >( component) )
        {
            positionComponent->updatePostion(x, y);
        }
        component->update();
        first++;
    }
}
