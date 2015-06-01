#include "gameobject.h"
#include <SDL/SDL_ttf.h>
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glx.h>
#include <GL/glext.h>
#include <GL/glxext.h>


class GraphicDevice:public GameObject {
public:
	GraphicDevice();
	~GraphicDevice();
	void step();
	bool openScreen(int width, int height);
	void closeScreen();
private:
	TTF_Font *_font;
    int _w;
	int _h;
};