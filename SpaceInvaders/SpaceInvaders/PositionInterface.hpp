//
//  PositionInterface.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef PositionInterface_hpp
#define PositionInterface_hpp

#include <stdio.h>
#include <Tuple>

//This is meant to enable gamee objects to know where they are
class PositionInterface
{
public:
    float positionX;
    float positionY;
    
    void updatePostion(float x, float y);
    virtual std::tuple<float,float> getPosition();
    void startPosition(float x, float y);
};

#endif /* PositionInterface_hpp */
