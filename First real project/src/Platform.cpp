//
//  Platform.cpp
//  First real project
//
//  Created by Leonhard Kren on 25/09/19.
//

#include "Platform.h"

void Platform:: setup()
{
    //x=rand()%600;
   // y=rand()%1000;
    platwidth=100;
    platheight=20;
    isdeadly=false;
    issticky=false;
}

void Platform:: draw()
{
    if(isdeadly)
    {
        ofSetColor(255, 0, 0);
    }
    else if(issticky)
    {
        ofSetColor(0,255,0);
    }
    else
    {
        ofSetColor(0, 0, 0);
    }
    ofDrawRectangle(x,y, platwidth, platheight);
  
}

void Platform:: position(int Xpos, int Ypos, int width, int height)
{
    x=Xpos;
    y=Ypos;
    platwidth=width;
    platheight=height;
}

bool Platform :: istouchingtop(Jumping* player)
{
    if(player->position.y+player->height<y
       &&player->position.y+player->height>y-10)
    {
        if((player->position.x+player->width>x
            &&player->position.x+player->width<x+platwidth)
           ||(player->position.x>x
              &&player->position.x<x+platwidth))
        {
            return true;
            player->position.y+=y -(player->position.y+player->height);
        }
        else
        {
            return false;
        }
    }
    else
    {
         return false;
    }
}
bool Platform :: istouchingleft(Jumping* player)
{
    if(player->position.y+player->height>y
       && player->position.y<y+platheight)
    {
        if(player->position.x+player->width<x
           && player->position.x+player->width>x-10)
        {
          return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
bool Platform:: istouchingright(Jumping*player)
{
    if(player->position.y+player->height>y
       && player->position.y<y+platheight)
    {
      if(player->position.x>x+platwidth
         && player->position.x<x+platwidth+10)
      {
          return true;
      }
      else
      {
            return false;
      }
    }
    else
    {
        return false;
    }
}
bool Platform:: istouchingbottom(Jumping*player)
{
    if(player->position.y>y+platheight
       && player->position.y<y+platheight+10)
    {
        if((player->position.x+player->width>x
            &&player->position.x+player->width<x+platwidth)
           ||(player->position.x>x
              &&player->position.x<x+platwidth))
        {
            player->stopvertical();
            return true;
        }
        else
        {
            return false;            
        }
    }
    else
    {
        return false;
    }
}
