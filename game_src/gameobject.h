#include <vector>

#ifndef GAMEOBJECT
#define GAMEOBJECT

class Component;

class GameObject {
public:
	GameObject();
	~GameObject();
	virtual void step()  =0; 
private:
	
};

#endif