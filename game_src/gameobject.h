#include <vector>

#ifndef GAMEOBJECT
#define GAMEOBJECT

class Component;


class GameObject {
public:
	GameObject();
	~GameObject();
	virtual void step()  =0; 
	void addComponent(Component* compo);
	void removeComponent(Component* component);
private:
	std::vector<Component*> _component;
};

#endif