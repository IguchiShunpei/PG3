#pragma once
#include "IShape.h"

//��`
class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void Size() override;�@//�I�[�o�[���C�h
	void Draw() override;
};

