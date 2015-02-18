#include "gameobject.h"


class GraphicDevice:public GameObject {
public:
	GraphicDevice();
	~GraphicDevice();
	void step();
};