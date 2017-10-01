//
//  PositionInterface.cpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#include "PositionInterface.hpp"
void PositionInterface::updatePostion(float x, float y)
{
    this->positionX = x;
    this->positionY = y;
}

std::tuple<float,float> PositionInterface::getPosition()
{
    return {this->positionX,this->positionY };
}

void PositionInterface::startPosition(float x,  float y)
{
    this->positionX = x;
    this->positionY = y;
}
