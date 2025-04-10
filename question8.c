// Program to evaluate a postfix expression

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int s[100] = {0};
int top = -1;
int ch;

int pop()
{
    if (top == -1)
    {
        printf("\n\n\tStack is Empty.");
        return 0;
    }
    else
    {
        return s[top--];
    }
}

void push(int element)
{

    if (top == 99)
        printf("\n\n\tStack is Full!!!");
    else
    {

        s[++top] = element;
    }
}

void display()
{
    int i;
    printf("\n\tStack S = ");
    for (i = 0; i <= top; i++)
    {
        printf(" | %d ", s[i]);
    }
}

void main()
{
    char postfix[100] = {'\0'}, element;
    int i, num1, num2, ans;

    printf("\n\n\t\t\t\t#8 Program to evaluate Postfix expression.\n\n");
    printf("\nEnter Postfix Expression: ");
    scanf("%s", postfix);
    printf("\nPostfix expression: %s\n\n", postfix); // Stored in array as string literal .

    i = 0;
    while (i < strlen(postfix))
    {
        element = postfix[i]; // to check
        if (isdigit(element))
        {
            push(element - '0'); /* element is a literal character and has ascii value i.e.
                                    '1' = 49 , '0' = 48 so when 49 - 48 then one will be pushed in the stack.*/
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch (element)
            {
            case '^':
                ans = pow(num2, num1);
                break;
            case '/':
                ans = num2 / num1;
                break;
            case '*':
                ans = num2 * num1;
                break;
            case '+':
                ans = num2 + num1;
                break;
            case '-':
                ans = num2 - num1;
                break;

            default:
                break;
            }
            push(ans);
        }
        display();
        i++;
    }
    printf("\n\tFinal Answer = %d", pop());
    getch();
}