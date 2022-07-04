#include <stdio.h>
#include "6-1.h"

int main(void)
{
	Stack stack;
	StackInit(&stack);
	int i=0;
	
	SPush(&stack, 1);
	SPush(&stack, 2);
	SPush(&stack, 3);
	SPush(&stack, 4);
	SPush(&stack, 5);
	
	for(i=0; i<5; i++)
	{
		if(!SIsEmpty(&stack))
			printf("%d ", SPop(&stack));
	}
	
	return 0;
}
