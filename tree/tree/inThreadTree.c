//#define _CRT_SECURE_NO_WARNINGS 1
//
//// 中序线索二叉树
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//	char data;
//	struct TreeNode* lchild;
//	struct TreeNode* rchild;
//	int ltag;
//	int rtag;
//}TreeNode;
//
//
//void createTree(TreeNode** T, char* data, int* index) {
//	char ch;
//	ch = data[*index];
//	*index += 1;
//	if (ch == '#') {
//		*T = NULL;
//	}
//	else {
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = ch;
//		(*T)->ltag = 0;
//		(*T)->rtag = 0;
//		createTree(&((*T)->lchild), data, index);
//		createTree(&((*T)->rchild), data, index);
//	}
//}
//
//void inThreadTree(TreeNode* T, TreeNode** pre) {
//	if (T) {
//		inThreadTree(T->lchild, pre);
//		// 做事
//		if (T->lchild == NULL) {
//			T->ltag = 1;
//			T->lchild = *pre;
//		}
//		if (*pre != NULL && (*pre)->rchild == NULL) {
//			(*pre)->rtag = 1;
//			(*pre)->rchild = T;
//		}
//		// 因为改变的是pre的一级指针 所以传参才需要传二级指针pre
//		*pre = T;
//		inThreadTree(T->rchild, pre);
//	}
//}
//
//TreeNode* getFirst(TreeNode* T) {
//	while (T->ltag == 0) {
//		T = T->lchild;
//	}
//	return T;
//}
//
//TreeNode* getNext(TreeNode* T) {
//	if (T->rtag == 1) {
//		return T->rchild;
//	}
//	else {
//		return getFirst(T->rchild);
//	}
//}
//
//void preOrder(TreeNode* T) {
//	if (T == NULL) {
//		return;
//	}
//	else {
//		printf("%c ", T->data);
//		preOrder(T->lchild);
//		preOrder(T->rchild);
//	}
//}
//
//int main()
//{
//	TreeNode* T;
//	TreeNode* pre = NULL;
//	int index = 0;
//	createTree(&T,"ABD##E##CF##G##",&index);
//	inThreadTree(T, &pre);
//	pre->rtag = 1;
//	pre->rchild = NULL;
//	for (TreeNode* node = getFirst(T); node != NULL; node = getNext(node)) {
//		printf("%c ", node->data);
//	}
//	printf("\n");
//	return 0;
//}