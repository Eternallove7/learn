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
//	 ����һ������
//	// int���� age������ = 20��ʼֵ���ɸ��ɲ�����
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
// %d - ����
// %f - float
// %lf - double



// ȫ�ֱ���
//int a = 100;
//
//int main()
//{
//	// �ֲ�����
//	int a = 10;
//
//	// �ֲ���������
//	printf("%d\n", a);
//	return 0;
//}




// д��������2��������
// scanf���뺯��
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