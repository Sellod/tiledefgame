class Component {
public:
	Component();
	~Component();
	
	virtual start();
	virtual update();
	virtual stop();
};