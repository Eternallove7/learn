#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("hello wrold\n");
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//}

//int main()
//{
//	 创建一个变量
//	// int类型 age变量名 = 20初始值（可给可不给）
//	int age = 19;
//
//	double weight = 55.6;
//
//	age++;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
// %d - 整形
// %f - float
// %lf - double



// 全局变量
//int a = 100;
//
//int main()
//{
//	// 局部变量
//	int a = 10;
//
//	// 局部变量优先
//	printf("%d\n", a);
//	return 0;
//}




// 写个代码求2个整数和
// scanf输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d\n", sum);
	return 0;
}