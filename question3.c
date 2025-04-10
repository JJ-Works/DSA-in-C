// Program to display first four multiple of a number using recursion.

#include <stdio.h>
#include <conio.h>

void multiRecursion(int x, int recurs)
{

	if (recurs > 4)
	{
		printf("\n\n");
		
		return;
	}
	printf("\t%d  ", x * recurs);
	multiRecursion(x, recurs + 1);
}

int main()
{
	int input;

	printf("\n\n\t\t\t#3 Program to display first four multiple of a number using recursion.");

	printf("\n\n\tEnter a number: ");
	scanf("%d", &input);
	printf("\n\n");
	multiRecursion(input, 1);
	getch();
	return 0;
}
