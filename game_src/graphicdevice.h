#include "gameobject.h"


class GraphicDevice:public GameObject {
public:
	GraphicDevice();
	~GraphicDevice();
	void step();
	bool openScreen(int width, int height);
	void closeScreen();
};