class Component {
public:
	Component();
	~Component();
	
	virtual start();
	virtual update();
	virtual stop() =0;
private:
	int _id;
};