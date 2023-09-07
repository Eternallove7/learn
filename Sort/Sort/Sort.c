#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int length) {
	for (int i = 0; i < length; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

// ��������
void insertSort(int array[], int length) {
	// ���ѭ�����ӵڶ���Ԫ�ؿ�ʼ�Ƚϣ��Ƚϴ�0 - ����ǰһ��Ԫ��֮����û�к��ʵ�λ�ò���
	for (int i = 1; i < length; i++) {
		for (int j = 0; j < i; j++) {
			if (array[i] < array[j]) {
				int temp = array[i];
				for (int k = i - 1; k >= j; k--) {
					array[k + 1] = array[k];
				}
				array[j] = temp;
			}
		}
		printArray(array, length);
	}
}

// ϣ������
void shellSort(int array[], int length, int step) {
	// ����ÿ��Ԫ�ض�Ҫ��һ��
	for (int i = 0; i < length; i++) {
		// �����鰴�ղ�������
		for (int j = i + step; j < length; j += step) {
			// ���в�������
			for (int k = i; k < j; k += step) {
				if (array[j] < array[k]) {
					int temp = array[j];
					for (int l = j - step; l >= k; l -= step) {
						array[l + step] = array[l];
					}
					array[k] = temp;
				}
			}

		}
	}
}

// ð������
void bubbleSort(int array[], int length) {
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
		printArray(array, length);
	}
}

// ������
int partition(int array[], int i, int j) {
	int temp = array[i];
	while (i < j) {
		while (i < j && array[j] >= temp) {
			j--;
		}
		if (i < j) {
			array[i] = array[j];
			i++;
		}
		while (i < j && array[i] < temp) {
			i++;
		}
		if (i < j) {
			array[j] = array[i];
			j--;
		}
	}
	array[i] = temp;
	return i;
}

// ��������
void quickSort(int array[], int i, int j) {
	if (i < j) {
		int index = partition(array, i, j);
		printArray(array, 6);
		// ����������
		quickSort(array, i, index - 1);
		// ����������
		quickSort(array, index + 1, j);
	}
	
}

int main()
{
	int arr[] = {4,3,5,1,9,6};
	int length = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, length);
	printf("�����\n");
	//insertSort(arr, length);


	//int step[] = { 3,2,1 };
	//for (int i = 0; i < 3; i++) {
	//	shellSort(arr, length, step[i]);
	//	printArray(arr, length);
	//}

	//bubbleSort(arr, length);
	quickSort(arr, 0, length - 1);
	return 0;
}