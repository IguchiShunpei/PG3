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

//staticで宣言したメンバ関数ポインタテーブルの実体
void(Enemy::* Enemy::pPhaseTable[])() =
{
	&Enemy::Approach,     //要素番号0
	&Enemy::Fire,		  //要素番号1
	&Enemy::Secession    //要素番号2
};

//近接
void Enemy::Approach()
{
	printf("近接\n");
}

//射撃
void Enemy::Fire()
{
	printf("射撃\n");
}

//離脱
void Enemy::Secession()
{
	printf("離脱\n");
}