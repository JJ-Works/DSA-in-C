// Menu driven program to demonstrate operations of doubly linked list.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head != NULL) {
        newNode->next = *head;
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void displayList(struct Node* head) {
    if (head == NULL) {
        printf("Doubly Linked List is empty.\n");
        return;
    }
    struct Node* temp = head;
    printf("\n\nDoubly Linked List: ");
    while (temp != NULL) {
        printf("| %d |", temp->data); // Enclose the value in a box
        if (temp->next != NULL) {
            printf(" <-> "); // Add a double arrow for the doubly linked list
        }
        temp = temp->next;
    }
    printf("\n");
}

void deleteNode(struct Node** head, int key) {
    struct Node* temp = *head;
    while (temp != NULL && temp->data != key) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Key not found!\n");
        return;
    }
    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    } else {
        *head = temp->next;
    }
    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }
    free(temp);
    printf("Node deleted.\n");
}

int main() {
    struct Node* head = NULL;
    int choice, data;
    printf("\n\n\n\t\t\t#20 Menu driven program to illustrate the Operation of Doubly Linked List.\n");
    do {
        printf("\nMenu:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Display List\n");
        printf("3. Delete Node\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter data to delete: ");
                scanf("%d", &data);
                deleteNode(&head, data);
                break;
            case 4:
                printf("\n\nExiting program.\n");
                break;
            default:
                printf("\nInvalid choice! Try again.\n");
        }
    } while (choice != 4);
    getch();
    return 0;
}