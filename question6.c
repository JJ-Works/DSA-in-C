// Program to calculate the nth number of a fibonacci series.

#include <stdio.h>
#include <conio.h>

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n, i;

    printf("\n\n\t\t\t#6 Program to calculate the nth number of a fibonacci series.");
    printf("\n\n\tEnter the number of terms: ");
    scanf("%d", &n);
    printf("\n\tFibonacci series: ");
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
        printf("\t\t");

    getch();
    return 0;
}
