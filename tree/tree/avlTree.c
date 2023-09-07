//#define _CRT_SECURE_NO_WARNINGS 1
//
//// 平衡二叉树AVL
//
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct TreeNode {
//	int data;
//	int height;
//	struct TreeNode* lchild;
//	struct TreeNode* rchild;
//}TreeNode;
//
//int getHeight(TreeNode* T) {
//	return T ? T->height : 0;
//}
//
//// RR型调整
//// 先找到失衡的跟节点node
//// 再找到导致树失衡的节点temp = node->rchild
//// 可能temp左边有孩子，所以要把temp的lchild放到跟节点的右边rchild
//// 再把导致树失衡的节点temp当成根节点，把之前的根节点放到现在的根节点的左边lchild
//// 最后记得把temp的地址赋给root改变根节点
//void rrRotation(TreeNode* node, TreeNode** root) {
//	TreeNode* temp = node->rchild;
//	node->rchild = temp->lchild;
//	temp->lchild = node;
//	node->height = max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
//	temp->height = max(getHeight(temp->lchild), getHeight(temp->rchild)) + 1;
//	*root = temp;
//}
//
//// ll型调整
//void llRotation(TreeNode* node, TreeNode** root) {
//	TreeNode* temp = node->lchild;
//	node->lchild = temp->rchild;
//	temp->lchild = node;
//	node->height = max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
//	temp->height = max(getHeight(temp->lchild), getHeight(temp->rchild)) + 1;
//	*root = temp;
//}
//
//void avlInsert(TreeNode** T, int data) {
//	if (*T == NULL) {
//		*T = (TreeNode*)malloc(sizeof(TreeNode));
//		(*T)->data = data;
//		(*T)->height = 0;
//		(*T)->lchild = NULL;
//		(*T)->rchild = NULL;
//	}
//	else if (data < (*T)->data) {
//		avlInsert(&(*T)->lchild, data);
//		// 拿到当前节点左右子树的高度
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		// 判断高度差
//		if (lHeight - rHeight == 2) {
//			if (data < (*T)->lchild->data) {
//				// LL型
//				llRotation(*T, T);
//			}
//			else {
//				// LR型
//				rrRotation((*T)->lchild, &((*T)->lchild));
//				llRotation(*T, T);
//			}
//		}
//	}
//	else if (data > (*T)->data) {
//		avlInsert(&(*T)->rchild, data);
//		// 拿到当前节点左右子树的高度
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		// 判断高度差
//		if (rHeight - lHeight == 2) {
//			if (data > (*T)->rchild->data) {
//				// RR型
//				rrRotation(*T, T);
//			}
//			else {
//				// RL型
//				llRotation((*T)->rchild, &((*T)->rchild));
//				rrRotation(*T, T);
//			}
//		}
//	}
//	(*T)->height = max(getHeight((*T)->lchild), getHeight((*T)->rchild)) + 1;
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
//	int nums[] = { 1,2,3,4,5 };
//	int size = sizeof(nums) / sizeof(nums[0]);
//	for (int i = 0; i < size; i++) {
//		avlInsert(&T, nums[i]);
//	}
//	preOrder(T);
//	printf("\n");
//	return 0;
//}