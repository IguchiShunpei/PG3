#include<stdio.h>
#include "math.h"

//再帰的な賃金
int RecoursiveSalary(int hour) {

	if (hour == 1) {
		return (100);
	}
	return RecoursiveSalary(hour - 1) * 2 - 50;

}

//賃金を比較する関数
void comparison(int flat, int rec)
{
	//一般時給と再帰的な時給を比較する
	int n = flat - rec;
	//絶対値
	n = abs(n);
	if (flat > rec)
	{
		printf("一般のほうが%d円高い。\n\n", n);
	}
	else
	{
		printf("再帰的のほうが%d円高い。\n\n", n);
	}
}

int main() {
	//一般的な賃金
	int price = 0;
	int hour = 1;
	int result = 0;


	for (int i = 1; i < 10; i++) {
		price += 1072;
		printf("%d時間で%d円\n", i, price);

		result += RecoursiveSalary(i);
		printf("%d時間で%d円\n\n", i, result);

		comparison(price, result);
	}
	return 0;
}