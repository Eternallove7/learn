#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test01() {
	int a = 0;
	// ~按位取反
	printf("%d\n", ~a);
}


// typedef 类型重定义，起别名
typedef unsigned int u_int;

void test02() {
	unsigned int num = 100;
	u_int num2 = 200;
	printf("%d %d\n", num, num2);
}


// extern 声明外部符号的，要想使用其他文件的全局变量，必须加入，这里的g_val来自add.c文件
extern int g_val;
// static 修饰的全局变量只能在自己所在的源文件中使用，其他源文件无法使用
static int g_var = 10;
void test03() {
	printf("%d\n", g_val);
	printf("%d\n", g_var);
}


// define定义宏：本质是替换X和Y
#define Add(X,Y) ((X) + (Y))
void test04() {
	printf("%d\n", 4 * Add(2, 3));
}



void test05() {
	int a = 10;// a在内存中要分配空间的 - 4个字节
	printf("%p\n", &a);// %p 专门用来打印地址

	int* pa = &a;// pa是用来存放地址的，在C语言中叫指针变量

	// *说明pa是指针变量
	// int 说明pa执行的对象是int类型

	char ch = "w";
	char* pc = &ch;
	printf("%p\n", pc);

	printf("变化前的a：%d\n", a);
	*pa = 20; // * 解引用操作 *pa就是通过pa里的地址找到a
	printf("变化后的a：%d\n", a);
}


// 结构体，类似于对象
struct Stu
{
	char name[20];
	int age;
	float score;
};

int main()
{
	test01();
	test02();
	test03();
	test04();
	test05();

	// 结构体的创建和初始化（new 一个对象）
	struct Stu s = { "张三",18,90.0 };
	printf("1: %s %d %lf\n", s.name,s.age,s.score);// 结构体变量.成员变量

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name,ps->age,ps->score);// 结构体指针->成员变量
	return 0;
}