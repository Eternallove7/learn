#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void print(int* arr, int length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n47 �쿡��");
}

void Reverse(int arr[], int from, int to) { //������arr��Ԫ�ش�from��to����
	for (int i = from; i <= to; i++, to--) {
		int temp = arr[i];
		arr[i] = arr[to];
		arr[to] = temp;
	}
}

void Converse(int arr[], int n, int k) {
	Reverse(arr, 0, k - 1);//���ú���
	//print(arr,k);
	Reverse(arr, 0, k - n - 1);
	//print(arr, k);
	Reverse(arr, k - n, k - 1);
	//print(arr, k);
}

void partition(int array[], int i, int j) {
	int temp = array[i];
	//printf("temp = %d\n", temp);
	//printf("i = %d\n", i);
	//printf("j = %d\n", j);
	j--;
	while (i < j) {
		while (i < j && array[j] % 2 == 0) {
			j--;
		}
		if (i < j) {
			array[i] = array[j];
			i++;
		}
		while (i < j && array[i] % 2 != 0) {
			i++;
		}
		if (i < j) {
			array[j] = array[i];
			j--;
		}
	}
	array[i] = temp;
}

void test1() {
	int length = 0;
	printf("����������Ԫ��������");
	scanf("%d", &length);
	printf("������%d��������������arr�У�", length);
	float* arr = (float*)malloc(sizeof(float) * length);
	float min = 0.0;
	int minIndex = 0;
	if (arr == NULL) {
		return;
	}
	else {
		for (int i = 0; i < length; i++)
		{
			scanf("%f", &arr[i]);
			if (i == 0) {
				min = arr[i];
			}
			if (min > arr[i]) {
				min = arr[i];
				minIndex = i;
			}
			
		}
		printf("��������СԪ��ֵΪ��%f",min);
		printf("\n���������е��±�Ϊ��%d",minIndex);
	}
}

void test2() {
	int n, m;
	printf("����������Ԫ��������\n");
	scanf("%d", &n);
	printf("������%d������Ԫ�أ�\n", n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		return;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
	}
	printf("��������������λ������\n");
	scanf("%d", &m);
	Converse(arr,m,n);
	printf("����ѭ������%d��λ�ú�����Ԫ��Ϊ��\n", m);
	print(arr, n);
}

void test3()
{
	int n;
	printf("����������Ԫ��������\n");
	scanf("%d", &n);
	printf("������%d������Ԫ�أ�\n", n);
	int* arr = (int*)malloc(sizeof(int) * n);
	if (arr == NULL) {
		return;
	}
	else {
		for (int i = 0; i < n; i++)
		{
			scanf("%d", &arr[i]);
		}
	}
	partition(arr,0,n);
	printf("��������������Ԫ��Ϊ��\n");
	print(arr, n);
}

int main(){
	test1();
	//test2();
	//test3();
	return 0;
}