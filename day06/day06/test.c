#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// switch case语法
void test01() 
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:
		printf("星期2\n");
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期7\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
}


// while语法
void test02() 
{
	int i = 1;

	// 在while循环中，break用于永久的终止循环
	// 在while循环中，continue的作用是跳过本次循环continue后边的代码，直接去判断部分，看是否进行下一次循环
	while (i <= 10)
	{
		if (i == 5)
		{
			//continue;
			break;
		}
		printf("%d\n", i);
		i++;
	}
}


// 无限循环读取char
void test03()
{
	char ch;
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}
}


// 
void test04()
{
	char password[20];
	printf("请输入密码：");
	scanf("%d", password);
	// 清理缓冲区
	char tmp;
	while ((tmp = getchar()) != '\n') // getchar()获取缓冲区的一个char
	{
		;
	}

	char ch = getchar();
	if (ch == 'Y')
	{
		printf("确认成功\n");
	}
	else 
	{
		printf("确认失败\n");
	}
}


// 计算阶乘的和
void test05() {
	int count;
	int ret = 1;
	int sum = 0;
	printf("请输入阶乘的值：");
	scanf("%d", &count);
	for (int i = 1; i <= count; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("阶乘的和为%d\n", sum);
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	
	// 算数组长度
	int arr[] = { 1,2,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d", size);
	return 0;
}