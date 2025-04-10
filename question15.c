// Menu driven program o implement circular queue using array.

#include <stdio.h>
#include <conio.h>
#define SIZE 33

int queue[SIZE];
int front = -1, rear = -1;

void enqueue()
{
    int value;

    if ((rear + 1) % SIZE == front)
    {
        printf("Queue is full.\n");
        return;
    }
    printf("Enter value to enqueue: ");
    scanf("%d", &value);

    if (front == -1)
        front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
    printf("Enqueued %d.\n", value);
}

void dequeue()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Dequeued %d.\n", queue[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    int i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main()
{
    int choice;

    printf("\n\n\t\t\t#15 Menu driven program to implement Circular Queue using Array.");
    do
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);
    getch();
    return 0;
}
