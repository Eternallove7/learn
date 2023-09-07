//#define _CRT_SECURE_NO_WARNINGS 1
//// 二叉树的创建与遍历
// 
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//	char data;
//	struct TreeNode* lchild;
//	struct TreeNode* rchild;
//}TreeNode;
//
//void createTree(TreeNode** T, char* data, int* index) {
//	// 创建二叉树
//	char ch;
//	ch = data[*index];
//	*index += 1;
//	if (ch == '#') {
//		// 此时为空节点
//		*T = NULL;
//	}
//	else {
//		// 此时不为空
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = ch;
//		// 创建左子树与创建右子树的逻辑一致，进行递归
//		createTree(&((*T)->lchild), data, index);
//		createTree(&((*T)->rchild), data, index);
//	}
//}
//
//// 前序遍历
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
//void inOrder(TreeNode* T) {
//	if (T == NULL) {
//		return;
//	}
//	else {
//		inOrder(T->lchild);
//		printf("%c ", T->data);
//		inOrder(T->rchild);
//	}
//}
//
//void postOrder(TreeNode* T) {
//	if (T == NULL) {
//		return;
//	}
//	else {
//		postOrder(T->lchild);
//		postOrder(T->rchild);
//		printf("%c ", T->data);
//	}
//}
//
//int main()
//{
//	TreeNode* T;
//	int index = 0;
//	createTree(&T, "ABD##E##CF##G##", &index);
//	preOrder(T);
//	printf("\n");
//	inOrder(T);
//	printf("\n");
//	postOrder(T);
//	printf("\n");
//	return 0;
//}