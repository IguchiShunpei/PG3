#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	//初期化
	void Initialize();

	//近接
	void Approach();
	//射撃
	void Fire();
	//離脱
	void Secession();
	//更新
	void Update();
private:
	int phaseNum = 0;

	//メンバ関数ポインタのテーブル
	static void(Enemy::* pPhaseTable[])();
};

