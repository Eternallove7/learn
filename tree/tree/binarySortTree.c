//#define _CRT_SECURE_NO_WARNINGS 1
//
//// ¶þ²æÅÅÐòÊ÷BST
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//	int data;
//	struct TreeNode* lchild;
//	struct TreeNode* rchild;
//}TreeNode;
//
//TreeNode* bstSearch(TreeNode* T, int data) {
//	if (T) {
//		if (T->data == data) {
//			return T;
//		}
//		else if(T->data > data) {
//			return bstSearch(T->lchild, data);
//		}
//		else {
//			return bstSearch(T->rchild, data);
//		}
//	}
//	else {
//		return NULL;
//	}
//}
//
//void bstInsert(TreeNode** T, int data) {
//	if (*T == NULL) {
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = data;
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//	}
//	else if (data == (*T)->data) {
//		return;
//	}
//	else if (data < (*T)->data) {
//		bstInsert(&((*T)->lchild), data);
//	}
//	else {
//		bstInsert(&((*T)->rchild), data);
//	}
//}
//
//void preOrder(TreeNode* T) {
//	if (T == NULL) {
//		return;
//	}
//	else {
//		printf("%d ", T->data);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//	}
//}
//
//int main()
//{
//	TreeNode* T = NULL;
//	int nums[] = { 10, 18, 55, 1, 2, 7, 68, 101, 57, 46};
//	int size = sizeof(nums) / sizeof(nums[0]);
//	for (int i = 0; i < size; i++) {
//		bstInsert(&T, nums[i]);
//	}
//	preOrder(T);
//	TreeNode* td = bstSearch(T, 2);
//	printf("\n");
//	return 0;
//}