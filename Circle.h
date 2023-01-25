#pragma once
#include "IShape.h"

//円
class Circle : public IShape
{
public:
	Circle();
	~Circle();
	void Size() override; //オーバーライド
	void Draw() override;
};

