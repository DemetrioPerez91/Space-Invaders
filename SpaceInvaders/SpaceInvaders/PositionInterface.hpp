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

class PositionInterface
{
public:
    float x;
    float y;
    
    void updatePostion(float x, float y);
    virtual std::tuple<float,float> getPosition();
    void startPosition(float x, float y);
};

#endif /* PositionInterface_hpp */
