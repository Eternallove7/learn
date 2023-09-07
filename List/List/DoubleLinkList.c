//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	int data;
//	struct Node* pre;
//	struct Node* next;
//} Node;
//
//Node* initList() {
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->data = 0;
//	L->pre = NULL;
//	L->next = NULL;
//	return L;
//}
//
//void headInsert(Node* L,int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	if (L->data == 0) {
//		// Á´±íÎª¿Õ
//		node->next = L->next;
//		node->pre = L;
//		L->next = node;
//		L->data++;
//	} else {
//		node->pre = L;
//		node->next = L->next;
//		L->next->pre = node;
//		L->next = node;
//		L->data++;
//	}
//}
//
//void tailInsert(Node* L, int data) {
//	Node* node = L;
//	Node* n = (Node*)malloc(sizeof(Node));
//	n->data = data;
//	while (node->next){
//		node = node->next;
//	}
//	n->next = NULL;
//	node->next = n;
//	n->pre = node;
//	L->data++;
//}
//
//void delete(Node* L,int data) {
//	Node* node = L->next;
//	while (node) {
//		if (node->data = data) {
//			// É¾³ý
//			node->pre->next = node->next;
//			node->next->pre = node->pre;
//			free(node);
//			L->data--;
//			break;
//		}
//		node = node->next;
//	}
//}
//
//void printList(Node* L) {
//	Node* node = L->next;
//	while (node) {
//		printf("%d ", node->data);
//		node = node->next;
//	}
//	printf("\n");
//}
//
//
//int main()
//{
//	Node* L = initList();
//	headInsert(L, 1);
//	headInsert(L, 2);
//	headInsert(L, 3);
//	headInsert(L, 4);
//	printList(L);
//	tailInsert(L, 5);
//	tailInsert(L, 6);
//	tailInsert(L, 7);
//	printList(L);
//	delete(L, 7);
//	delete(L, 3);
//	printList(L);
//	return 0;
//}