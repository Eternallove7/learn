#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int test01() {
	int a = 0;
	// ~按位取反
	printf("%d", ~a);
	return 0;
}

int main()
{
	test01();
	return 0;
}