#include<stdio.h>
#include "math.h"

//�ċA�I�Ȓ���
int RecoursiveSalary(int hour) {

	if (hour == 1) {
		return (100);
	}
	return RecoursiveSalary(hour - 1) * 2 - 50;

}

//�������r����֐�
void comparison(int flat, int rec)
{
	//��ʎ����ƍċA�I�Ȏ������r����
	int n = flat - rec;
	//��Βl
	n = abs(n);
	if (flat > rec)
	{
		printf("��ʂ̂ق���%d�~�����B\n\n", n);
	}
	else
	{
		printf("�ċA�I�̂ق���%d�~�����B\n\n", n);
	}
}

int main() {
	//��ʓI�Ȓ���
	int price = 0;
	int hour = 1;
	int result = 0;


	for (int i = 1; i < 10; i++) {
		price += 1072;
		printf("%d���Ԃ�%d�~\n", i, price);

		result += RecoursiveSalary(i);
		printf("%d���Ԃ�%d�~\n\n", i, result);

		comparison(price, result);
	}
	return 0;
}