#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int test01() {
	int a = 0;
	// ~��λȡ��
	printf("%d", ~a);
	return 0;
}

int main()
{
	test01();
	return 0;
}