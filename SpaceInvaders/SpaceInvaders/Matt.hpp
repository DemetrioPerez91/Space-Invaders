//
//  Matt.hpp
//  SpaceInvaders
//
//  Created by User on 9/30/17.
//  Copyright © 2017 DemetrioPerez. All rights reserved.
//

#ifndef Matt_hpp
#define Matt_hpp

#include <stdio.h>
#include "MessageComponent.hpp"
#include "GameObject.hpp"

class Matt:public GameObject
{
public:
    Matt(MesageComponent *message)
    {
        components.push_back(message);
    }
    
    
};
#endif /* Matt_hpp */
