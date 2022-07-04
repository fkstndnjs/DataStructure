#include <stdio.h>

void Hanoi(int num, char from, char by, char to)
{
	if(num==1)
		printf("원반 1을 %c에서 %c로 이동\n", from, to);
	else
	{
		Hanoi(num-1, from, to, by);
		printf("원반 %d를 %c에서 %c로 이동\n", num, from, to);
		Hanoi(num-1, by, from, to);
	}
}

int main(void)
{
	Hanoi(3, 'A', 'B', 'C');
	
	return 0;
}
