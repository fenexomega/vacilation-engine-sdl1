/*
 * FinalGame.cpp
 *
 *  Created on: 24/02/2014
 *      Author: jordy
 */

#include "FinalGame.h"




FinalGame::FinalGame()
{
    

}


void FinalGame::gameUpdate(long currentTime)
{
    if(points.size() < 1000)
        points.push_back(new GEVector2D(GERandom::getInt(800),GERandom::getInt(600)));
}

void FinalGame::gameDraw()
{
    for(auto &i : points)
        GEGraphicsCore::DrawRectangle(i->getX(),i->getY(),1,1,GEColor::getColor(GERandom::getInt(256),GERandom::getInt(256),GERandom::getInt(256)));
}

void FinalGame::gameDispose()
{
   for(auto &i : points)
       delete i;
}

FinalGame::~FinalGame()
{
    
}

