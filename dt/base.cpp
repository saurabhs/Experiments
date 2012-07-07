#include "base.h"

GameTimer::GameTimer()
{
}

void GameTimer::init()
{
	printf("Timer Starts...\n");
}

bool GameTimer::update(float dt)
{
	static float time = 0;

	if(time > 10)
	{
		printf("\nTimer Ends...\n");
		return false;
	}
	else
	{
		time += dt;
	}

	return true;
}

GameTimer::~GameTimer()
{	
}