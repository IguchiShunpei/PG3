#pragma once
#include "IShape.h"

//�~
class Circle : public IShape
{
public:
	Circle();
	~Circle();
	void Size() override; //�I�[�o�[���C�h
	void Draw() override;
};

