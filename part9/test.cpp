int main(void)
{
	BTreeNode * ndA = MakeBTreeNode(); // ��� A ���� 
	BTreeNode * ndB = MakeBTreeNode(); // ��� B ���� 
	BTreeNode * ndC = MakeBTreeNode(); // ��� C ����
	...
	 
	MakeLeftSubTree(ndA, ndB); // ��� A�� ���� �ڽ� ���� ��� B ����
	MakeRightSubTree(ndA, ndC); // ��� A�� ������ �ڽ� ���� ��� C ���� 
	...
}
