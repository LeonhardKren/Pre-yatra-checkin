//
//  Levels.cpp
//  First real project
//
//  Created by Leonhard Kren on 15/10/19.
//

#include "Levels.hpp"

void Level:: setup()
{
    level=4;
}
void Level:: istouching(Jumping*hop)
{
    for(int i=0;i<100;i++)
    {
        Platforms[i].draw();
        if(Platforms[i].istouchingtop(hop))
        {
            if(Platforms[i].isdeadly)
            {
                hop->position.x=respawnx;
                hop->position.y=respawny;
                hop->killplayer();
            }
            else
            {
            hop->stopfalling();
            }
        }
        if(Platforms[i].istouchingleft(hop))
        {
            if(Platforms[i].isdeadly)
            {
                hop->position.x=respawnx;
                hop->position.y=respawny;
                hop->killplayer();
            }
            else
            {
            hop->checkleft();
            }
        }
        if(Platforms[i].istouchingright(hop))
        {
            if(Platforms[i].isdeadly)
            {
                hop->position.x=respawnx;
                hop->position.y=respawny;
                hop->killplayer();
            }
            else
            {
            hop->checkright();
            }
        }
        if(Platforms[i].istouchingbottom(hop))
        {
            if(Platforms[i].isdeadly)
            {
                hop->position.x=respawnx;
                hop->position.y=respawny;
                hop->killplayer();
            }
            if(Platforms[i].issticky)
            {
                hop->sticky();
                hop->direction.y=0;
            }
            else
            {
            hop->checkbottom();
            }
        }
            
        
    }
}
void Level:: platreset()
{
    for(int i=0;i<100;i++)
    {
        Platforms[i].position(0, 0, 0, 0);
        Platforms[i].isdeadly=false;
        Platforms[i].issticky=false;
    }
}
void Level:: level1(Jumping* player)
{
    respawnx= 100;
    respawny=550;
    Platforms[0].position(0, 700,1100,300);
    Platforms[1].position(0,0,20,800);
    Platforms[2].position(0,0,1100,20);
    Platforms[3].position(1010,0,60,100);
    Platforms[4].position(100,400,100,20);
    Platforms[5].position(400,500,100,20);
    Platforms[6].position(500,200,100,20);
    Platforms[7].position(600,400,52,100);
    Platforms[8].position(1010,300,60,800);
    Platforms[9].position(800,400,100,20);
    Platforms[10].position(0,0,0,0);
    if(player->position.x>1020)
    {
        if(player->position.y>100
           && player->position.y<300)
        {
            level+=1;
            player->position.x=0;
            platreset();
        }
    }
}
void Level:: level2(Jumping*player)
{
    respawnx=10;
    respawny=200;
    Platforms[0].position(0, 700,410,300);
    Platforms[1].position(0,0,20,100);
    Platforms[2].position(0,0,1100,20);
    Platforms[3].position(1010,0,60,450);
    Platforms[4].position(300,300,100,20);
    Platforms[5].position(500,500,100,20);
    Platforms[6].position(700,200,100,20);
    Platforms[7].position(600,400,52,100);
    Platforms[8].position(350,600,60,800);
    Platforms[9].position(50,600,100,20);
    Platforms[10].position(-40,300,60,600);
    Platforms[11].position(1010,650,60,400);
    Platforms[11].isdeadly=false;
    Platforms[12].position(410,700,600,300);
    Platforms[12].isdeadly=true;
    
    if(player->position.x>1020)
    {
        if(player->position.y<650
           && player->position.y>450)
        {
            level+=1;
            player->position.x=0;
            player->direction.y=10;
            platreset();
            player->position.y-=10;
        }
    }
    if(player->position.x<0)
    {
        if(player->position.y>100
           && player->position.y<300)
        {
            level-=1;
            player->position.x=1010;
            platreset();
        }
    }
    
}
void Level:: level3(Jumping*player)
{
    respawnx=10;
    respawny=500;
   // Platforms[0].position(0, 700,1100,300);
    Platforms[1].position(0,0,20,450);
    Platforms[2].position(0,0,1100,20);
    Platforms[3].position(1010,0,20,100);
    Platforms[4].position(500,300,600,600);
    Platforms[5].position(200,550,100,20);
    Platforms[6].position(0,400,100,20);
    Platforms[7].position(200,300,100,20);
    Platforms[8].position(600,300,50,50);
    Platforms[8].isdeadly=true;
    Platforms[9].position(750,300,100,50);
    Platforms[9].isdeadly=true;
    Platforms[10].position(-40,650,70,600);
    Platforms[11].position(30,700,470,500);
    Platforms[11].isdeadly=true;
    if(player->position.x<0)
    {
        if(player->position.y<650
           && player->position.y>450)
        {
            level-=1;
            player->position.x=1010;
            platreset();
        }
    }
    if(player->position.x>1020)
    {
        if(player->position.y<300
           && player->position.y>100)
        {
            level+=1;
            player->position.x=10;
            platreset();
        }
    }
    
}
void Level:: level4(Jumping*player)
{
    respawnx=0;
    respawny=200;
    Platforms[1].position(0,0,20,100);
    Platforms[2].position(0,300,20,700);
    Platforms[3].position(0,700,1100,300);
    Platforms[4].position(0,0,1100,100);
    Platforms[5].position(1010,0,20,800);
    Platforms[6].position(100,100,700,10);
    Platforms[6].issticky=true;
    Platforms[7].position(0,300,900,30);
    Platforms[8].position(100,500,1000,30);
    Platforms[9].position(100,300,700,20);
    Platforms[9].isdeadly=true;
    Platforms[10].position(200,500,200,20);
    Platforms[10].isdeadly=true;
    Platforms[11].position(600,500,200,20);
    Platforms[11].isdeadly=true;
    Platforms[12].position(600,330,200,10);
    Platforms[12].issticky=true;
    Platforms[13].position(200,330,200,10);
    Platforms[13].issticky=true;
    if(player->position.x<-10)
    {
        if(player->position.y>100
           && player->position.y<300)
        {
            level-=1;
            player->position.x=1010;
            platreset();
            
        }
    }
}
