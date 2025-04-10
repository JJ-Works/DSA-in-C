// Menu driven program to implement linear queue using array.

#include <stdio.h>
#include <conio.h>
#define SIZE 12

int queue[SIZE], front = -1, rear = -1;

void enqueue()
{
    if (rear == SIZE - 1)
    {
        printf("Queue is full.\n");
    }
    else
    {
        int value;
        printf("\n\tEnter value to enqueue: ");
        scanf("%d", &value);
        if (front == -1)
            front = 0;
        queue[++rear] = value;
        printf("\n\tEnqueued %d.\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\n\tQueue is empty.\n");
    }
    else
    {
        printf("\n\tDequeued %d.\n", queue[front++]);
        if (front > rear)
            front = rear = -1;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("\n\tQueue is empty.\n");
    }
    else
    {
        printf("\n\tQueue elements: ");
        for (int i = front; i <= rear; i++)
        {
            if (i == rear)
            {
                printf("%d", queue[i]);
            }
            else
            {
                printf("%d <---- ", queue[i]);
            }
        }
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("\n\n\t\t\t#14 Menu driven program to implement linear queue using array.\n\n");
    do
    {
        printf("\n\t1. Enqueue\n\t2. Dequeue\n\t3. Display\n\t4. Exit\n\n\tEnter your choice: ");
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
            printf("Invalid choice.\n");
        }
    } while (choice != 4);
    getch();
    return 0;
}