#include <string>

class Entry {
public:
	Entry();
	~Entry();
private:
	int _type;
	int _livetime; // in Frames
	float _wert1;
	float _wert2;
	float _wert3;
	std::string _text;
};
