// Program to convert Infix into Postfix.

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#define size 20

int top = -1;
char stack[size];

void push(char x)
{
    if (top == size - 1)
    {
        printf("\nStack Overflow!");
        return;
    }
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    else
    {
        char popped = stack[top--];
        return popped;
    }
}

int priority(char x)
{
    if (x == '(')
    {
        return 0;
    }
    else if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else{
    
        return -1;
    }
}

int main()
{
    char input[20];
    char *a, x;

    printf("\n\n\t\t\t#9 Program to convert Infix expression into Postfix expression.\n\n");

    printf("\n\nEnter the expression: ");
    scanf("%s", input); /* the input is stored in the input array as a string literal meaning the string is stored as one character at one block of array and its ended with '\0' and
                         input is the variable that stores the address of the array we can call it the pointer*/

    a = input; /* Now what this does is it helps to traverse the array instead of using input[index] we can
                   simply increment the a as it stores the address i.e. input*/

    printf("\n\nPostfix Expression: ");

    while (*a != '\0')
    {

        if (isalnum(*a))
        {
            printf("%c", *a);
        }
        else if (*a == '(')
        {
            push(*a);
        }
        else if (*a == ')')
        {
            while ((x = pop()) != '(')
            {
                printf("%c", x);
            }
        }
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(*a))
            {
                printf("%c", pop());
            }
            push(*a);
        }

        a++;
    }
    while (top != -1)
    {
        printf("%c", pop());
    }
    printf("\n\n");
    getch();
}
