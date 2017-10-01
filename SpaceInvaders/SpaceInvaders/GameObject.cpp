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
        if( PositionInterface * positionComponent = dynamic_cast< PositionInterface* >( component) )
        {
            positionComponent->updatePostion(x, y);
            auto t = positionComponent->getPosition();
            this->x = std::get<0>(t);
            this->y = std::get<1>(t);
        }
        component->update();
        first++;
    }
}
