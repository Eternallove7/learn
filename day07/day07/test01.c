#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Swap(int* pa, int* pb)
{
	int z = 0;
	z = *pa;
	*pa = *pb;
	*pb = z;
}

// 1.引用头文件
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a = %d b = %d\n", a, b);
	Swap(&a, &b);
	printf("交换后a = %d b = %d\n", a, b);

	// 相当于使用接口的实现方法
	// 2.使用头文件中的方法
	int rs = Add(a, b);
	printf("%d\n", rs);

	return 0;
}