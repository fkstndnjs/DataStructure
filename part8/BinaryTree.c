#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree.h"

BTreeNode * MakeBTreeNode(void)
{
	BTreeNode * nd = (BTreeNode*)malloc(sizeof(BTreeNode));
	nd->left=NULL;
	nd->right=NULL;
	return nd;
}

BTData GetData(BTreeNode * bt)
{
	return bt->data;
}

void SetData(BTreeNode * bt, BTData data)
{
	bt->data = data;
}

BTreeNode * GetLeftSubTree(BTreeNode * bt)
{
	return bt->left;
}

BTreeNode * GetRightSubTree(BTreeNode * bt)
{
	return bt->right;
}

void MakeLeftSubTree(BTreeNode * main, BTreeNode * sub)
{
	if(main->left!=NULL)
		free(main->left);
		
	main->left=sub;
}

void MakeRightSubTree(BTreeNode * main, BTreeNode * sub)
{
	if(main->right!=NULL)
		free(main->right);
		
	main->right=sub;
}

void PreorderTraverse(BTreeNode * bt, void (*fptr)(int))
{
	if(bt==NULL)
		return;
		
	fptr(bt->data);
	PreorderTraverse(bt->left, fptr);
	PreorderTraverse(bt->right, fptr);
}

void InorderTraverse(BTreeNode * bt, void (*fptr)(int))
{
	if(bt==NULL)
		return;
		
	InorderTraverse(bt->left, fptr);
	fptr(bt->data);
	InorderTraverse(bt->right, fptr);
}

void PostorderTraverse(BTreeNode * bt, void (*fptr)(int))
{
	if(bt==NULL)
		return;
		
	PostorderTraverse(bt->left, fptr);
	PostorderTraverse(bt->right, fptr);
	fptr(bt->data);
}

void DeleteTree(BTreeNode * bt)
{
	if(bt==NULL)
		return;
	
	DeleteTree(bt->left);
	DeleteTree(bt->right);
	free(bt);
}
