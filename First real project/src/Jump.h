//
//  Jump.hpp
//  First real project
//
//  Created by Leonhard Kren on 10/09/19.
//

#ifndef Jump_h
#define Jump_h

#include "ofMain.h"

class Jumping{
public:
    void setup();
    void draw();
    void update();
    void keyPressed(int key);
    void keyReleased(int key);
    void stopfalling();
    void checkleft();
    void checkright();
    void checkbottom();
    void stopvertical();
    void sticky();
    void killplayer();
    
    ofVec2f jumpforce;
    ofVec2f gravity;
    ofVec2f direction;
    ofVec2f position;
    ofVec2f previouspos;
    ofVec2f speed;
    
    int width;
    int height;
    int jumps;
    
};

#endif /* Jump_h */
