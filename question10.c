// Program to convert infix to prefix

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#define size 20

int top = -1;
char stack[size];

void push(char x) {
    if (top == size - 1) {
        printf("\nStack Overflow!");
        return;
    }
    stack[++top] = x;
}

char pop() {
    if (top == -1) {
        return '\0';
    }
    return stack[top--];
}

int priority(char x) {
    if (x == '(' || x == ')') {
        return 0;
    } else if (x == '+' || x == '-') {
        return 1;
    } else if (x == '*' || x == '/') {
        return 2;
    } else if (x == '^') {
        return 3;
    }
    return -1;
}

void reverse(char *exp) {
    int len = strlen(exp);
    for (int i = 0; i < len / 2; i++) {
        char temp = exp[i];
        exp[i] = exp[len - i - 1];
        exp[len - i - 1] = temp;
    }
}

int main() {
    char infix[size], prefix[size] = {'\0'}, temp[size];
    int j = 0;

    printf("\n\n\t\t\t#10 Program to convert Infix expression into Prefix expression\n\n");

    printf("\nEnter the infix expression: ");
    scanf("%s", infix);

    reverse(infix);

    for (int i = 0; i < strlen(infix); i++) {
        if (infix[i] == '(') {
            temp[i] = ')';
        } else if (infix[i] == ')') {
            temp[i] = '(';
        } else {
            temp[i] = infix[i];
        }
    }
    temp[strlen(infix)] = '\0';

    for (int i = 0; temp[i] != '\0'; i++) {
        if (isalnum(temp[i])) {
            prefix[j++] = temp[i];
        } else if (temp[i] == '(') {
            push(temp[i]);
        } else if (temp[i] == ')') {
            while (top != -1 && stack[top] != '(') {
                prefix[j++] = pop();
            }
            pop();
        } else {
            while (top != -1 && priority(stack[top]) >= priority(temp[i])) {
                prefix[j++] = pop();
            }
            push(temp[i]);
        }
    }

    while (top != -1) {
        prefix[j++] = pop();
    }
    prefix[j] = '\0';

    reverse(prefix);

    printf("\n\nPrefix Expression: %s\n", prefix);

    getch();
    return 0;
}