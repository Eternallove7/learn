#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

enum Sex
{
	// ö�����͵ı�����δ������ȡֵ
	MALE,
	FEMALE,
	SECRET
};

// dinfine����ı�ʶ������Ҳ�ǳ���
//#define MAX 1000;
//int main()
//{
//	// const���εĳ����� �����ϻ��Ǳ����������г����ԣ��ܽ���ǳ���
//	const int num = 10;
//	printf("num = %d\n", num);
//	// n����MAX����ĳ�����
//	int n = MAX;
//	printf("n = %d\n", n);
//	enum Sex s = MALE;
//	printf("s = %d\n", s);
//}




// д��������2��������
// scanf���뺯��
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