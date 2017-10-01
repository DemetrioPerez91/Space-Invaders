//
//  HeroObject.cpp
//  SpaceInvaders
//
//  Created by User on 10/1/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "HeroObject.hpp"

void HeroObject::update()
{
    int first = 0;
    int last = int(components.size() );
    while (first != last)
    {
        GameComponent * component = components.at(first);
        if( HeroBehaviorComponent * positionComponent = dynamic_cast< HeroBehaviorComponent* >( component) )
        {
            auto t = positionComponent->getPosition();
            this->x = std::get<0>(t);
            this->y = std::get<1>(t);
        }
        if( SpriteComponent * positionComponent = dynamic_cast< SpriteComponent* >( component) )
        {
            positionComponent->updatePostion(x, y);
        }
        component->update();
        first++;
    }
}
