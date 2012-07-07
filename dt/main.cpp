#include <ctime>
#include <conio.h>
#include <dos.h>
#include <stdio.h>
#include <windows.h>

#include "base.h"

using namespace std;

int main()
{
	GameTimer* gt = new GameTimer();
	gt->init();

	clock_t dtLast = 0;

	bool bIsRunning = true;
	while(bIsRunning)
	{
		clock_t current = clock();
		float dt = static_cast<float>(current - dtLast) / CLOCKS_PER_SEC;
		dtLast = current;

		bIsRunning = gt->update(dt);
	}

	_getch();

	return 0;
}