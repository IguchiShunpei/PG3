#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	//������
	void Initialize();

	//�ߐ�
	void Approach();
	//�ˌ�
	void Fire();
	//���E
	void Secession();
	//�X�V
	void Update();
private:
	int phaseNum = 0;

	//�����o�֐��|�C���^�̃e�[�u��
	static void(Enemy::* pPhaseTable[])();
};

