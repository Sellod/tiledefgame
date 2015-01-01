#include <vector>


class Entry;
class GameObject;

class EntryCore {
public:
	EntryCore();
	~EntryCore();
	
	int declare(GameObject*);
	int step();
	bool isExit();
private:
	std::vector<Entry*> _entry;
	std::vector<GameObject*> _gameobject;
};