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
// return 0;
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



//#include <string.h>
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c','\0' };
//
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	printf("%zd\n", strlen(arr1));
//	printf("%zd\n", strlen(arr2));
//
//	printf("\a\a\a");
// return 0;
//}


// if语句
int ifTest() {
	printf("好好学习吗？\n");
	int input = 0;
	scanf("%d", &input);
	if (input == 1) {
		printf("加油吧！！");
	}
	else {
		printf("无论结局如何还是要谢谢你");
	}
 return 0;
}


// while语句
int whileTest() {
	int line = 0;
	while (line < 300) {
		printf("写代码:%d\n", line);
		line++;
	}
	if (line == 300) {
		printf("成为大牛了！");
	}
	return 0;
}



// 函数
int Add(int x,int y) {
	return x + y;
}


// for循环遍历数组
int forTest() {
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	for (int i = 0; i < 10; i++) {
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


int main() {
	int total = Add(1, 3);
	printf("%d\n", total);
	//ifTest();
	// whileTest();
	forTest();
	
}