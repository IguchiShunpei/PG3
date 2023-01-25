#include <stdio.h>
#include "Enemy.h"
#include <windows.h>

int main()
{
	Enemy* enemy = new Enemy;

	while (true)
	{
		enemy->Update();
		Sleep(2 * 1000);
	}

	return 0;
}