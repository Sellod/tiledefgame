#include "application.h"
#include "entrycore.h"
#include "graphicdevice.h"
#include "mainscreen.h"
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
	GraphicDevice *graphicdevice;
	MainScreen *mainscreen;

	std::cout << "Tiledefgame Version 0.01.3 vom 18.02.2015" << std::endl;
	
	entrycore = new EntryCore;
	graphicdevice = new GraphicDevice;
	std::cout << "blub1 "<< std::endl;;
	mainscreen = new MainScreen;
	
	//entrycore->declare(graphicdevice);
	
	{
		entrycore->step();
	} while(entrycore->isExit()!=true);
	
	
	delete mainscreen;
	delete graphicdevice;
	delete entrycore;
}

