// Program of evaluate prefix expression.

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int s[100] = {0};
int top = -1;

int pop() {
    if (top == -1) {
        printf("\nStack is Empty.");
        return 0;
    } else {
        return s[top--];
    }
}

void push(int element) {
    if (top == 99)
        printf("\nStack is Full!!!");
    else {
        s[++top] = element;
    }
}

void display() {
    int i;
    printf("\nStack S = ");
    for (i = 0; i <= top; i++) {
        printf(" | %d ", s[i]);
    }
}

void main() {
    char prefix[100] = {'\0'}, element;
    int i, num1, num2, ans;

    printf("\n\n\t\t\t#11 Program to evaluate Prefix expression\n\n");

    printf("\nEnter Prefix Expression: ");
    scanf("%s", prefix);
    printf("\nPrefix expression: %s\n\n", prefix);

    i = strlen(prefix) - 1;
    while (i >= 0) {
        element = prefix[i];
        if (isdigit(element)) {
            push(element - '0');
        } else {
            num1 = pop();
            num2 = pop();
            switch (element) {
                case '^':
                    ans = pow(num1, num2);
                    break;
                case '/':
                    ans = num1 / num2;
                    break;
                case '*':
                    ans = num1 * num2;
                    break;
                case '+':
                    ans = num1 + num2;
                    break;
                case '-':
                    ans = num1 - num2;
                    break;
                default:
                    break;
            }
            push(ans);
        }
        display();
        i--;
    }
    printf("\n\n Final Answer = %d\n\n", pop());
    getch();
}