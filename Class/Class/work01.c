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
	printf("\n47 朱俊钊");
}

void Reverse(int arr[], int from, int to) { //将数组arr中元素从from到to逆置
	for (int i = from; i <= to; i++, to--) {
		int temp = arr[i];
		arr[i] = arr[to];
		arr[to] = temp;
	}
}

void Converse(int arr[], int n, int k) {
	Reverse(arr, 0, k - 1);//调用函数
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
	printf("请输入数组元数个数：");
	scanf("%d", &length);
	printf("请输入%d个整数存在数组arr中：", length);
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
		printf("数组中最小元素值为：%f",min);
		printf("\n其在数组中的下标为：%d",minIndex);
	}
}

void test2() {
	int n, m;
	printf("请输入数组元数个数：\n");
	scanf("%d", &n);
	printf("请输入%d个数组元素：\n", n);
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
	printf("请输入数组左移位置数：\n");
	scanf("%d", &m);
	Converse(arr,m,n);
	printf("数组循环左移%d个位置后，数组元素为：\n", m);
	print(arr, n);
}

void test3()
{
	int n;
	printf("请输入数组元数个数：\n");
	scanf("%d", &n);
	printf("请输入%d个数组元素：\n", n);
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
	printf("奇数调整后，数组元素为：\n");
	print(arr, n);
}

int main(){
	test1();
	//test2();
	//test3();
	return 0;
}