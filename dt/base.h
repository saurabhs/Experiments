#include <iostream>

class GameTimer
{
public:
	GameTimer();
	~GameTimer();

	void init();
	bool update(float dt);
};