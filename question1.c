// Program to pass array to a function

#include <stdio.h>
#include <conio.h>
#define SIZE 5

void arrayPrinter(int x[])
{

	printf("\n\n\n\n\tArray successfully passed to the function.\n\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("\n\tThe value in array index %d is %d.", i, x[i]);
	}

	printf("\n\n");
}

int main()
{
	int array[SIZE];

	printf("\n\n\t\t\t\t#1 Program to pass array to a functions.");
	printf("\n\n\n");
	for (int i = 0; i < SIZE; i++)
	{
		printf("\n\tEnter value for array index %d: ", i);
		scanf("%d", &array[i]);
	}

	arrayPrinter(array);
	getch();
	return 0;
}
