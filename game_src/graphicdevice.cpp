#include "graphicdevice.h"
#include <iostream>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>



GraphicDevice::GraphicDevice()
{
	SDL_Init( SDL_INIT_VIDEO);
	TTF_Init();
	_font = TTF_OpenFont("/usr/share/fonts/truetype/arial.ttf",16);
	if(!_font) {
		std::cout << "Font nicht geladen!" << std::endl;
	};
}


GraphicDevice::~GraphicDevice()
{

	TTF_CloseFont(_font);
	TTF_Quit();
	SDL_Quit( );
}


void GraphicDevice::step()
{

}

bool GraphicDevice::openScreen(int width, int height)
{
	
	/*float pos[4]={0.0,0.0,0.0,1.0};
	float amb[4]={0.9,0.9,0.9,1.0};
	float div[4]={0.1,0.1,0.1,1.0};
	float spe[4]={0.0,0.0,0.0,1.0};
	float ambmat[4]={0.9,0.9,0.9,1.0};*/
	_w=width;
	_h=height;

	SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 8 );
	SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 8 );
	SDL_GL_SetAttribute(SDL_GL_SWAP_CONTROL,0);
	SDL_GL_SetAttribute(SDL_GL_ACCELERATED_VISUAL,1);

	SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 24 );
	SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );
	SDL_SetVideoMode(width,height,32,SDL_OPENGL);

	glViewport(0, 0, width-1, height-1);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60, width/height, 0.1, 1000.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glClearColor(0.0,0.0,1.0,0.0);
    glDisable(GL_CULL_FACE);

	glEnable(GL_ALPHA_TEST);
	glAlphaFunc(GL_GREATER, 0.1);

	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	glEnable(GL_DEPTH_TEST);

	/*glShadeModel(GL_SMOOTH);
	glLightModeli(GL_LIGHT_MODEL_TWO_SIDE,GL_TRUE);
	glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER,GL_TRUE);
	glLightfv(GL_LIGHT0, GL_POSITION, pos);
 	glLightfv(GL_LIGHT0, GL_AMBIENT,  amb);
	glLightfv(GL_LIGHT0, GL_DIFFUSE,  div);
	glLightfv(GL_LIGHT0, GL_SPECULAR,  spe); */

	/*glEnable(GL_NORMALIZE);
	glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT,ambmat);
	glEnableClientState(GL_NORMAL_ARRAY);
	glEnableClientState(GL_TEXTURE_COORD_ARRAY);
	glLightf(GL_LIGHT0, GL_CONSTANT_ATTENUATION, 0.005);
  	glLightf(GL_LIGHT0, GL_LINEAR_ATTENUATION, 0.001);
  	glLightf(GL_LIGHT0, GL_QUADRATIC_ATTENUATION, 0.002);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHTING);*/
	return true;
}

void GraphicDevice::closeScreen()
{

}


