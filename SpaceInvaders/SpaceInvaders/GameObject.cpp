//
//  GameObject.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "GameObject.hpp"

void GameObject::update()
{
    int first = 0;
    int last = int(components.size() );
    while (first != last)
    {
        GameComponent * component = components.at(first);
        if( PositionInterface * positionableComponent = dynamic_cast< PositionInterface* >( component) )
        {
            positionableComponent->updatePostion(x, y);
        }
        component->update();
        first++;
    }
}
