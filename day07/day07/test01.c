#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

// 1.����ͷ�ļ�
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰa = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("������a = %d b = %d\n", a, b);

	// �൱��ʹ�ýӿڵ�ʵ�ַ���
	// 2.ʹ��ͷ�ļ��еķ���
	int rs = Add(a, b);
	printf("%d\n", rs);

	return 0;
}