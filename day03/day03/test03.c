#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

// 要想使用其他文件下的全局变量，则需要声明才能使用
// 声明下变量gol_val
extern int gol_val;

int main()
{
	printf("%d\n", gol_val);
	return 0;
}