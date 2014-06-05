/*
 ==============================================================
 | Name        : Main.cpp                                     |
 | Author      : Jordy                                        |
 | Version     :                                              |
 | Copyright   : Your copyright notice                        |
 | Description : Hello World in C, Ansi-style                 |
 ==============================================================
 */

#include "Main.h"
#include "Engine.h"
#include "Game/FinalGame.h"
#include "Demo/StarInSpace.h"

int main(int argc, char **argv) 
{
    if(!Engine::InitSystems())
        return EXIT_FAILURE;
    
    StarInSpace game;
    
    Engine::Run(&game);
	return EXIT_SUCCESS;
}
