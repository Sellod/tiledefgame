#include "entrycore.h"
#include "entry.h"
#include <iterator>

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

bool EntryCore::undeclare(GameObject* gameobject)
{	
	std::vector<GameObject*>::iterator c;
	std::vector<GameObject*>::iterator ant;
	
	for(c = _gameobject.begin();c != _gameobject.end(); c++) {
		if( (*c) == gameobject) {
			ant = c;
		};
	};
	_gameobject.erase(ant);
	return false;
}


void EntryCore::SendEntry(Entry* entry)
{
	_entry.push_back(entry);
}
