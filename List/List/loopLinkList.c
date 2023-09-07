//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//
//typedef struct Node {
//	int data;
//	struct Node* next;
//}Node;
//
//
//Node* initList() {
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->data = 0;
//	L->next = L;
//	return L;
//}
//
//void headInsert(Node* L, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	node->next = L->next;
//	L->next = node;
//	L->data++;
//}
//
//void tailInsert(Node* L, int data) {
//	Node* n = L;
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	while (n->next != L) {
//		n = n->next;
//	}
//	node->next = L;
//	n->next = node;
//	L->data++;
//}
//
//
//void delete(Node* L, int data) {
//	Node* preNode = L;
//	Node* node = L->next;
//	while (node != L) {
//		if (node->data == data) {
//			// delete
//			preNode->next = node->next;
//			free(node);
//			break;
//		}
//		preNode = node;
//		node = node->next;
//	}
//	L->data--;
//}
//
//void printList(Node* L) {
//	Node* head = L;
//	L = L->next;
//	while (L != head) {
//		printf("%d ", L->data);
//		L = L->next;
//	}
//	printf("\n");
//}
//
//
//
//int main()
//{
//	Node* list = initList();
//	headInsert(list, 1);
//	headInsert(list, 2);
//	headInsert(list, 3);
//	headInsert(list, 4);
//	headInsert(list, 5);
//	tailInsert(list, 6);
//	tailInsert(list, 7);
//	tailInsert(list, 8);
//	printList(list);
//	delete(list, 4);
//	printList(list);
//	return 0;
//}