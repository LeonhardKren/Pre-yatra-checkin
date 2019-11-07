//
//  Levels.hpp
//  First real project
//
//  Created by Leonhard Kren on 15/10/19.
//

#ifndef Levels_hpp
#define Levels_hpp

#include <stdio.h>
#include "Jump.h"
#include "Platform.h"
#include "Killplatform.hpp"

class Level
{
public:
    void setup();
    void istouching(Jumping*hop);
    void level1(Jumping* player);
    void level2(Jumping* player);
    void level3(Jumping* player);
    void level4(Jumping* player);
    void platreset();
    
    
    Platform Platforms[100];
    int level;
    int respawnx;
    int respawny;

};

#endif /* Levels_hpp */
