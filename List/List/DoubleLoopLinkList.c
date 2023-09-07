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
//
//Node* initList() {
//	Node* L = (Node*)malloc(sizeof(Node));
//	L->data = 0;
//	L->next = L;
//	L->pre = L;
//	return L;
//}
//
//void headInsert(Node* L, int data) {
//	Node* node = (Node*)malloc(sizeof(Node));
//	node->data = data;
//	if (L->data == 0) {
//		// 链表为空
//		node->next = L->next;
//		node->pre = L;
//		L->next = node;
//		L->pre = node;
//		L->data++;
//	}
//	else {
//		// 链表不为空
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
//	while (node->next != L) {
//		node = node->next;
//	}
//	n->data = data;
//	n->next = node->next;
//	n->pre = node;
//	node->next->pre = n;
//	node->next = n;
//	L->data++;
//}
//
//void delete(Node* L, int data) {
//	Node* node = L->next;
//	while (node != L) {
//		if (node->data == data) {
//			// 删除
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
//	while (node != L) {
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
//	delete(L, 3);
//	delete(L, 7);
//	printList(L);
//	return 0;
//}