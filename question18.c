// Menu driven program to implement stack as a linked list.

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("\n\tStack overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("\n\tPushed %d onto the stack\n", value);
}

void pop() {
    if (top == NULL) {
        printf("\n\tStack underflow\n");
        return;
    }
    struct Node* temp = top;
    top = top->next;
    printf("\n\tPopped %d from the stack\n", temp->data);
    free(temp);
}

void display() {
    if (top == NULL) {
        printf("\n\tStack is empty\n");
        return;
    }
    struct Node* temp = top;
    printf("\n\nStack elements are:\n\n");
    while (temp != NULL) {
        if (temp == top) {
            printf("\t\t|\t%d\t| <--- top\n", temp->data); // Highlight the top element
        } else {
            printf("\t\t|\t%d\t|\n", temp->data);
        }
        printf("\t\t>---------------<\n");
        temp = temp->next;
    }
}

int main() {
    int choice, value;
    printf("\n\n\t\t\t#18 Menu driven program to implement stack as a linked list.\n\n");
    do {
        printf("\n\tMenu:\n");
        printf("\t\t1. Push\n");
        printf("\t\t2. Pop\n");
        printf("\t\t3. Display\n");
        printf("\t\t4. Exit\n");
        printf("\n\t\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\n\tEnter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("\n\tInvalid choice, please try again\n");
        }
    } while (choice != 4);
    getch();
    return 0;
}