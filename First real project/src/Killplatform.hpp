//
//  Killplatform.hpp
//  First real project
//
//  Created by Leonhard Kren on 30/10/19.
//

#ifndef Killplatform_hpp
#define Killplatform_hpp

#include <stdio.h>
#include "Platform.h"
#
class Killplatform: public Platform{
public: Killplatform();
    void draw();
    void kill();
    
    Boolean istouching;
};
#endif /* Killplatform_hpp */


