//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//
//Node* initQueue() {
//	Node* Q = (Node*)malloc(sizeof(Node));
//	Q->data = 0;
//	Q->next = NULL;
//	return Q;
//}
//
//// 入队
//void enQueue(Node* Q, int data) {
//	Node* q = Q;
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	for (int i = 0; i < Q->data; i++) {
//		q = q->next;
//	}
//	node->next = q->next;
//	q->next = node;
//	Q->data++;
//}
//
//// 判断队列是否为空
//int isEmpty(Node* Q) {
//	if (Q->data == 0 || Q->next == NULL) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}
//
//// 出队操作
//int deQueue(Node* Q) {
//	if (isEmpty(Q)) {
//		return -1;
//	}
//	else {
//		Node* node = Q->next;
//		int data = node->data;
//		Q->next = node->next;
//		Q->data--;
//		free(node);
//		return data;
//	}
//
//}
//
//void printQueue(Node* Q) {
//	Node* node = Q->next;
//	while (node) {
//		printf("%d ", node->data);
//		node = node->next;
//	}
//	printf("\n");
//}
//
//int main()
//{
//	Node* Q = initQueue();
//	enQueue(Q, 1);
//	enQueue(Q, 2);
//	enQueue(Q, 3);
//	enQueue(Q, 4);
//	printQueue(Q);
//	printf("%d\n", deQueue(Q));
//	printf("%d\n", deQueue(Q));
//	printQueue(Q);
//	return 0;
//}