#include <vector>
#include <list>
#include <string>


class Entry;
class GameObject;

class EntryCore {
public:
	EntryCore();
	~EntryCore();
	
	int declare(GameObject*);
	bool undeclare(GameObject*);
	int step();
	bool isExit();
	void SendEntry(Entry*);
private:
	std::list<Entry*> _entry;
	std::vector<GameObject*> _gameobject;
};