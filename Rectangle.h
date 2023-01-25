#pragma once
#include "IShape.h"

//矩形
class Rectangle : public IShape
{
public:
	Rectangle();
	~Rectangle();
	void Size() override;　//オーバーライド
	void Draw() override;
};

