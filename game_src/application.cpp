#include "application.h"
#include "entrycore.h"
#include <iostream>

Application::Application()
{

}

Application::~Application()
{

}


int Application::run()
{
	EntryCore *entrycore;
	std::cout << "Tile Rpg Version 0.01.2 vom 26.12.2014" << std::endl;
	
	entrycore = new EntryCore;
	{
		entrycore->step();
	} while(entrycore->isExit()!=true);
	delete entrycore;
}

