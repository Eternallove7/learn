#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test01() {
	int a = 0;
	// ~��λȡ��
	printf("%d\n", ~a);
}


// typedef �����ض��壬�����
typedef unsigned int u_int;

void test02() {
	unsigned int num = 100;
	u_int num2 = 200;
	printf("%d %d\n", num, num2);
}


// extern �����ⲿ���ŵģ�Ҫ��ʹ�������ļ���ȫ�ֱ�����������룬�����g_val����add.c�ļ�
extern int g_val;
// static ���ε�ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ�ã�����Դ�ļ��޷�ʹ��
static int g_var = 10;
void test03() {
	printf("%d\n", g_val);
	printf("%d\n", g_var);
}


// define����꣺�������滻X��Y
#define Add(X,Y) ((X) + (Y))
void test04() {
	printf("%d\n", 4 * Add(2, 3));
}



void test05() {
	int a = 10;// a���ڴ���Ҫ����ռ�� - 4���ֽ�
	printf("%p\n", &a);// %p ר��������ӡ��ַ

	int* pa = &a;// pa��������ŵ�ַ�ģ���C�����н�ָ�����

	// *˵��pa��ָ�����
	// int ˵��paִ�еĶ�����int����

	char ch = "w";
	char* pc = &ch;
	printf("%p\n", pc);

	printf("�仯ǰ��a��%d\n", a);
	*pa = 20; // * �����ò��� *pa����ͨ��pa��ĵ�ַ�ҵ�a
	printf("�仯���a��%d\n", a);
}


// �ṹ�壬�����ڶ���
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

	// �ṹ��Ĵ����ͳ�ʼ����new һ������
	struct Stu s = { "����",18,90.0 };
	printf("1: %s %d %lf\n", s.name,s.age,s.score);// �ṹ�����.��Ա����

	struct Stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3: %s %d %lf\n", ps->name,ps->age,ps->score);// �ṹ��ָ��->��Ա����
	return 0;
}