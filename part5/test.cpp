void LInsert(List * plist, Data data)
{
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = plist->head->next;
	plist->tail->prev = newNode;
	
	newNode->prev = plist->tail->prev;
	plist->head->next = newNode;

	(plist->numOfData)++;
}
