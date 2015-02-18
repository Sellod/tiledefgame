#include "entrycore.h"

EntryCore::EntryCore()
{

}

EntryCore::~EntryCore()
{

}


bool EntryCore::isExit()
{
	return false;
}


int EntryCore::step()
{
	
	return 0;
}

int EntryCore::declare(GameObject* gameobject)
{
	_gameobject.push_back(gameobject);
	
}
