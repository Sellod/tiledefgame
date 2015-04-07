#include "entry.h"

class OpenScreen : public Entry {
public:
    OpenScreen();
	~OpenScreen();
private:
	int _width;
	int _height;
	int _dpp;
};