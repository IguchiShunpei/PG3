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

//static�Ő錾���������o�֐��|�C���^�e�[�u���̎���
void(Enemy::* Enemy::pPhaseTable[])() =
{
	&Enemy::Approach,     //�v�f�ԍ�0
	&Enemy::Fire,		  //�v�f�ԍ�1
	&Enemy::Secession    //�v�f�ԍ�2
};

//�ߐ�
void Enemy::Approach()
{
	printf("�ߐ�\n");
}

//�ˌ�
void Enemy::Fire()
{
	printf("�ˌ�\n");
}

//���E
void Enemy::Secession()
{
	printf("���E\n");
}