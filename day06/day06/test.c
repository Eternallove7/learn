#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


// switch case�﷨
void test01() 
{
	int day;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("����1\n");
		break;
	case 2:
		printf("����2\n");
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����7\n");
		break;
	default:
		printf("�������\n");
		break;
	}
}


// while�﷨
void test02() 
{
	int i = 1;

	// ��whileѭ���У�break�������õ���ֹѭ��
	// ��whileѭ���У�continue����������������ѭ��continue��ߵĴ��룬ֱ��ȥ�жϲ��֣����Ƿ������һ��ѭ��
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


// ����ѭ����ȡchar
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
	printf("���������룺");
	scanf("%d", password);
	// ��������
	char tmp;
	while ((tmp = getchar()) != '\n') // getchar()��ȡ��������һ��char
	{
		;
	}

	char ch = getchar();
	if (ch == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else 
	{
		printf("ȷ��ʧ��\n");
	}
}


// ����׳˵ĺ�
void test05() {
	int count;
	int ret = 1;
	int sum = 0;
	printf("������׳˵�ֵ��");
	scanf("%d", &count);
	for (int i = 1; i <= count; i++)
	{
		ret *= i;
		sum += ret;
	}
	printf("�׳˵ĺ�Ϊ%d\n", sum);
}

int main()
{
	//test01();
	//test02();
	//test03();
	//test04();
	test05();
	
	// �����鳤��
	int arr[] = { 1,2,3,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	printf("%d", size);
	return 0;
}