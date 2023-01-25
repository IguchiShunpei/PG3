#include <stdio.h>
#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"

int main()
{
	IShape* shapes[2];


	for (int i = 0; i < 2; i++)
	{
		if (i < 1)
		{
			shapes[i] = new Circle;
		}
		else
		{
			shapes[i] = new Rectangle;
		}
	}

	for (int i = 0; i < 2; i++)
	{
		shapes[i]->Size();
		shapes[i]->Draw();
	}


	for (int i = 0; i < 2; i++)
	{
		delete shapes[i];
	}

	return 0;
}