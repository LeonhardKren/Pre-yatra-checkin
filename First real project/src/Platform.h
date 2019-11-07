//
//  Platform.hpp
//  First real project
//
//  Created by Leonhard Kren on 25/09/19.
//

#ifndef Platform_hpp
#define Platform_hpp

#include <stdio.h>
#include "Jump.h"

class Platform{
public:
    void setup();
    void draw();
    void position(int Xpos, int Ypos, int width, int height);
    bool istouchingtop(Jumping* player);
    bool istouchingleft(Jumping*player);
    bool istouchingright(Jumping*player);
    bool istouchingbottom(Jumping*player);
    bool isdeadly;
    bool issticky;
    int x;
    int y;
    int platwidth;
    int platheight;
};
#endif /* Platform_hpp */
