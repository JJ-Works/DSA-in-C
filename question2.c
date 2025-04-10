// Program to find the power of a number by taking input from user.

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int power, inputValue;

	printf("\n\n\t\t\t#2 Program to find the power of a number by taking input from user.");

	printf("\n\n\tEnter a number: ");
	scanf("%d", &inputValue);
	printf("\n\n\tEnter the power: ");
	scanf("%d", &power);
	int result = pow(inputValue, power);

	printf("\n\n\tThe final result: %d", result);
	printf("\n\n\n");
	getch();
	return 0;
}
