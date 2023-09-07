//#define _CRT_SECURE_NO_WARNINGS 1
//
//// ƽ�������AVL
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
//// RR�͵���
//// ���ҵ�ʧ��ĸ��ڵ�node
//// ���ҵ�������ʧ��Ľڵ�temp = node->rchild
//// ����temp����к��ӣ�����Ҫ��temp��lchild�ŵ����ڵ���ұ�rchild
//// �ٰѵ�����ʧ��Ľڵ�temp���ɸ��ڵ㣬��֮ǰ�ĸ��ڵ�ŵ����ڵĸ��ڵ�����lchild
//// ���ǵð�temp�ĵ�ַ����root�ı���ڵ�
//void rrRotation(TreeNode* node, TreeNode** root) {
//	TreeNode* temp = node->rchild;
//	node->rchild = temp->lchild;
//	temp->lchild = node;
//	node->height = max(getHeight(node->lchild), getHeight(node->rchild)) + 1;
//	temp->height = max(getHeight(temp->lchild), getHeight(temp->rchild)) + 1;
//	*root = temp;
//}
//
//// ll�͵���
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
//		// �õ���ǰ�ڵ����������ĸ߶�
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		// �жϸ߶Ȳ�
//		if (lHeight - rHeight == 2) {
//			if (data < (*T)->lchild->data) {
//				// LL��
//				llRotation(*T, T);
//			}
//			else {
//				// LR��
//				rrRotation((*T)->lchild, &((*T)->lchild));
//				llRotation(*T, T);
//			}
//		}
//	}
//	else if (data > (*T)->data) {
//		avlInsert(&(*T)->rchild, data);
//		// �õ���ǰ�ڵ����������ĸ߶�
//		int lHeight = getHeight((*T)->lchild);
//		int rHeight = getHeight((*T)->rchild);
//		// �жϸ߶Ȳ�
//		if (rHeight - lHeight == 2) {
//			if (data > (*T)->rchild->data) {
//				// RR��
//				rrRotation(*T, T);
//			}
//			else {
//				// RL��
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