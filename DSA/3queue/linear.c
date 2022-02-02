#include <stdio.h>
#define SIZE 5

struct queue
{
    int items[SIZE];
    int front, rear;
}q;

void create()
{
    q.front = 0;
    q.rear = -1;
}

int isempty()
{
    if (q.front == -1)
        return 1;
    else
        return 0;
}

int isfull()
{
    if (q.rear == SIZE - 1)
        return 1;
    else
        return 0;
}

void enQueue(int value)
{
    if (isfull())
        printf("\nQueue is Full!!");
    else
    {
        q.rear++;
        q.items[q.rear] = value;
        printf("\nInserted -> %d", value);
    }
}

void deQueue()
{
    if (isempty())
        printf("\nQueue is Empty!!");
    else
    {
        printf("\nDeleted : %d", q.items[q.front]);
        q.front++;
    }
}

void display()
{
    if (q.rear == -1)
        printf("\nQueue is Empty!!!");
    else
    {
        int i;
        printf("\nQueue elements are:\n");
        for (i = q.front; i <= q.rear; i++)
            printf("%d  ", q.items[i]);
    }
    printf("\n");
}

int main()
{
    create();
    
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);

    display();

    deQueue();

    display();

    return 0;
}