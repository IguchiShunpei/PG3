#pragma once


class IShape
{
public:
	IShape();
	~IShape();
	//ƒˆ‰¼‘zŠÖ”
	virtual void Size() = 0;
	virtual void Draw() = 0;
};

