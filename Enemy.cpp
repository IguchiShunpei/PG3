#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	
}

Enemy::~Enemy()
{
	
}

void Enemy::Initialize()
{
	phaseNum = 0;
}

void Enemy::Update()
{
	(this->*pPhaseTable[phaseNum])();
	phaseNum++;
	if (phaseNum > 2)
	{
		phaseNum = 0;
	}
}

//staticΕιΎ΅½oΦ|C^e[uΜΐΜ
void(Enemy::* Enemy::pPhaseTable[])() =
{
	&Enemy::Approach,     //vfΤ0
	&Enemy::Fire,		  //vfΤ1
	&Enemy::Secession    //vfΤ2
};

//ίΪ
void Enemy::Approach()
{
	printf("ίΪ\n");
}

//Λ
void Enemy::Fire()
{
	printf("Λ\n");
}

//£E
void Enemy::Secession()
{
	printf("£E\n");
}