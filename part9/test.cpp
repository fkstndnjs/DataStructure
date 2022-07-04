int main(void)
{
	BTreeNode * ndA = MakeBTreeNode(); // 노드 A 생성 
	BTreeNode * ndB = MakeBTreeNode(); // 노드 B 생성 
	BTreeNode * ndC = MakeBTreeNode(); // 노드 C 생성
	...
	 
	MakeLeftSubTree(ndA, ndB); // 노드 A의 왼쪽 자식 노드로 노드 B 연결
	MakeRightSubTree(ndA, ndC); // 노드 A의 오른쪽 자식 노드로 노드 C 연결 
	...
}
