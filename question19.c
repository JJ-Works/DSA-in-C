// Menu driven program to implement a queue as a linked list.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

void enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("\n\tMemory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;
    if (rear == NULL) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    printf("\tEnqueued %d\n", value);
}

void dequeue() {
    if (front == NULL) {
        printf("\tQueue is empty\n");
        return;
    }
    struct Node* temp = front;
    front = front->next;
    if (front == NULL) {
        rear = NULL;
    }
    printf("\tDequeued %d\n", temp->data);
    free(temp);
}

void display() {
    if (front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    struct Node* temp = front;
    printf("\n\tQueue: ");
    while (temp != NULL) {
        printf("| %d |", temp->data); // Enclose the value in a box
        if (temp->next != NULL) {
            printf(" -> "); // Add an arrow if there is a next element
        }
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice, value;

    printf("\n\n\n\t\t\t#19 Menu driven program to implement a queue as a linked list.\n");
    do {
        printf("\n     Menu:\n");
        printf("\t1. Enqueue\n");
        printf("\t2. Dequeue\n");
        printf("\t3. Display\n");
        printf("\t4. Exit\n");
        printf("\n\tEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nEnter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n\nExiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    getch();
    return 0;
}