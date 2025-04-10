// Menu driven program to implement priority queue.
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define MAX 66

typedef struct {
    int data[MAX];
    int priority[MAX];
    int size;
} PriorityQueue;

PriorityQueue insert(PriorityQueue pq, int value, int prio) {
    if (pq.size == MAX) {
        printf("\tQueue is full!\n");
        return pq;
    }
    int i = pq.size;
    while (i > 0 && pq.priority[i - 1] > prio) {
        pq.data[i] = pq.data[i - 1];
        pq.priority[i] = pq.priority[i - 1];
        i--;
    }
    pq.data[i] = value;
    pq.priority[i] = prio;
    pq.size++;
    return pq;  
}

PriorityQueue delete(PriorityQueue pq) {
    if (pq.size == 0) {
        printf("\tQueue is empty!\n");
        return pq;
    }
    printf("Deleted element: %d\n", pq.data[0]);
    for (int i = 0; i < pq.size - 1; i++) {
        pq.data[i] = pq.data[i + 1];
        pq.priority[i] = pq.priority[i + 1];
    }
    pq.size--;
    return pq;  
}

void display(PriorityQueue pq) {
    if (pq.size == 0) {
        printf("\tQueue is empty!\n");
        return;
    }
    printf("\n\tPriority Queue:\n");
    for (int i = 0; i < pq.size; i++) {
        printf("\t\tValue: %d, Priority: %d\n", pq.data[i], pq.priority[i]);
    }
}

int main() {
    PriorityQueue pq = { .size = 0 };
    int choice, value, prio;

    printf("\n\n\t\t\t#16 Menu driven program to implement Priority Queue.");

    do {
        printf("\n\n  Menu:\n");
        printf("\t1. Insert\n");
        printf("\t2. Delete\n");
        printf("\t3. Display\n");
        printf("\t4. Exit\n");
        printf("\n\n\tEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\tEnter value and priority: ");
                scanf("%d %d", &value, &prio);
                pq = insert(pq, value, prio);  // Assign the returned queue
                break;
            case 2:
                pq = delete(pq);  // Assign the returned queue
                break;
            case 3:
                display(pq);
                break;
            case 4:
                printf("\tExiting...\n");
                break;
            default:
                printf("\tInvalid choice!\n");
        }
    } while (choice != 4);

    getch();
    return 0;
}
