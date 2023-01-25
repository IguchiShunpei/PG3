#include <stdio.h>
#include "Enemy.h"
#include <windows.h>
#include <iostream>
using namespace std;

bool Enemy::isEnemyAlive;

int main()
{
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;

	Sleep(3 * 1000);

	delete enemy1;
	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;
	cout << Enemy::isEnemyAlive << endl;

	return 0;
}