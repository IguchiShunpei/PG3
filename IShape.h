#pragma once


class IShape
{
public:
	IShape();
	~IShape();
	//�������z�֐�
	virtual void Size() = 0;
	virtual void Draw() = 0;
};

