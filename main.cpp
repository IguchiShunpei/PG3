#include<stdio.h>

template<typename Type>
//小さいほうの値を返す

Type Min(Type a, Type b)
{
	if (a <= b)
	{
		return static_cast<Type>(a);
	}
	else if (a > b)
	{
		return static_cast<Type>(b);
	}
}

template<>
char Min(char a, char b)
{
	return 0;
}

int main(void)
{
	printf("%d\n", Min<int>(1, 2));
	printf("%f\n", Min<float>(1.5f, 2.5f));
	printf("%lf\n", Min<double>(1.5, 2.5));
	if (Min<char>('a', 'b') == 0)
	{
		printf("数字は代入できません");
	}

	return 0;
}