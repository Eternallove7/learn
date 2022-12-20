#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

enum Sex
{
	// 枚举类型的变量的未来可能取值
	MALE,
	FEMALE,
	SECRET
};

// dinfine定义的标识符常量也是常量
//#define MAX 1000;
//int main()
//{
//	// const修饰的常变量 本质上还是变量，但具有常属性，总结就是常量
//	const int num = 10;
//	printf("num = %d\n", num);
//	// n是由MAX定义的常变量
//	int n = MAX;
//	printf("n = %d\n", n);
//	enum Sex s = MALE;
//	printf("s = %d\n", s);
//}




// 写个代码求2个整数和
// scanf输入函数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum=%d\n", sum);
//	return 0;
//}



#include <string.h>
int main()
{
	char arr1[] = { "abc" };
	char arr2[] = { 'a','b','c','\0' };


	printf("%s\n", arr1);
	printf("%s\n", arr2);

	printf("%zd\n", strlen(arr1));
	printf("%zd\n", strlen(arr2));
}