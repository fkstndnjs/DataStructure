#include <stdio.h>

typedef struct
{
	int (*fptr)(int);
} Test;

int Func(int num)
{
	return num;
}

int main(void)
{
	int a=10;
	
	Test b;
	
	b.fptr=Func;
	
	printf("%d", b.fptr(a));
	
	return 0;
}
