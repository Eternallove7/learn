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
// return 0;
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


// if���
int ifTest() {
	printf("�ú�ѧϰ��\n");
	int input = 0;
	scanf("%d", &input);
	if (input == 1) {
		printf("���Ͱɣ���");
	}
	else {
		printf("���۽����λ���Ҫлл��");
	}
 return 0;
}


// while���
int whileTest() {
	int line = 0;
	while (line < 300) {
		printf("д����:%d\n", line);
		line++;
	}
	if (line == 300) {
		printf("��Ϊ��ţ�ˣ�");
	}
	return 0;
}



// ����
int Add(int x,int y) {
	return x + y;
}


// forѭ����������
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