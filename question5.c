// Program to find the factorial of a number

#include <stdio.h>
#include <conio.h>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        
        
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int num;

    printf("\n\n\t\t\t#5 Program to find the factorial of a number.");
    printf("\n\n\tEnter a number: ");
    scanf("%d", &num);
    printf("\t\tFactorial of %d is %d\n", num, factorial(num));
    getch();
    return 0;
}
