#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

typedef struct Queue {
	int front;
	int rear;
	int data[MAXSIZE];
}Queue;

Queue* initQueue() {
	Queue* Q = (Queue*)malloc(sizeof(Queue));
	Q->front = Q->rear = 0;
	return Q;
}

// 判断队列是否满了
int isFull(Queue* Q) {
	if ((Q->rear + 1) % MAXSIZE == Q->front) {
		return 1;
	}
	else {
		return 0;
	}
}

// 判断队列是否为空
int isEmpty(Queue* Q) {
	if (Q->front == Q->rear) {
		return 1;
	}
	else {
		return 0;
	}
}

// 入队
int enQueue(Queue* Q, int data) {
	if (isFull(Q)) {
		return 0;
	}
	else {
		Q->data[Q->rear] = data;
		Q->rear = (Q->rear + 1) % MAXSIZE;
		return 1;
	}
}

// 出队
int deQueue(Queue* Q) {
	if (isEmpty(Q)) {
		return -1;
	}
	else {
		int data = Q->data[Q->front];
		Q->front = (Q->front + 1) % MAXSIZE;
		return data;
	}
}

void printQueue(Queue* Q) {
	int length = (Q->rear - Q->front	 + MAXSIZE) % MAXSIZE;
	int index = Q->front;
	for (int i = 0; i < length; i++)
	{
		printf("%d ", Q->data[index]);
		index = (index + 1) % MAXSIZE;
	}
	printf("\n");
}

int main()
{
	Queue* Q = initQueue();
	enQueue(Q, 1);
	enQueue(Q, 2);
	enQueue(Q, 3);
	enQueue(Q, 4);
	printQueue(Q);
	deQueue(Q);
	printQueue(Q);
	return 0;
}