//
//  Jump.cpp
//  First real project
//
//  Created by Leonhard Kren on 10/09/19.
//

#include "Jump.h"

void Jumping:: setup()
{
    position = ofVec2f(200,600);
    gravity = ofVec2f(0,0);
    jumpforce =ofVec2f(0,15);
    previouspos = ofVec2f(0,0);
    speed = ofVec2f(0,0);
    width=50;
    height=50;
    jumps=1;
    
}
void Jumping:: update()
{
    position+=direction;
    direction+=gravity;
    direction+=speed;
    if(direction.x>5)
    {
        direction.x=5;
    }
    if(direction.x<-5)
    {
        direction.x=-5;
    }
    if(direction.y>5)
    {
        direction.y=5;
    }
    if(direction.y<-10)
    {
        direction.y=-10;
    }
    if(position.y+width>700)
    {
        direction.y=0;
        jumps=0;
    }

    previouspos= position;
    
}
void Jumping:: draw()
{
    ofSetColor(0,0,0);
    ofDrawRectangle(position.x, position.y, width, height);
    
    
}

void Jumping:: stopfalling()
{
    direction.y=0;
    jumps=0;
}
void Jumping:: checkleft()
{
    position.x-=5;
}
void Jumping:: checkright()
{
    position.x+=5;
    
}
void Jumping:: checkbottom()
{
    direction.y=gravity.y;
    position.y+=10;
    //IMPORTANT CODE FOR STICKING ON THE TOP (STICKY PLATFORMS)
   // direction.y=0;
   // gravity.y=5;
}
void Jumping:: sticky()
{
     direction.y=0;
     
}
void Jumping::stopvertical()
{
    direction.y=5;
}
void Jumping::killplayer()
{
    jumps=0;
}
void Jumping:: keyPressed(int key)
{
    if(key=='f')
    {
        direction-=jumpforce;
        gravity.y=0.5;
        jumps+=1;
        if(jumps>1)
        {
            jumpforce.y=0;
        }
        else
        {
            jumpforce.y=10;
        }
    }
    if(key=='A'||key=='a')
    {
        speed.x=-5;
    }
    if(key=='D'||key=='d')
    {
        speed.x=5;
    }
    
}
void Jumping::keyReleased(int key)
{
    if(key=='A'||key=='a')
    {
        speed.x=0;
        direction.x=0;
    }
    if(key=='D'||key=='d')
    {
        speed.x=0;
        direction.x=0;
    }
}
