#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void display()
{
    struct node *p = front;
    printf("\n[ ");
    while(p != NULL)
    {
        printf("%d ",p->info);
        p = p->next;
    }
    printf(" ]");
}

//Create new node
struct node * createnode(int data)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = data;
    newnode->next = NULL;
    return newnode;
}

//Insert a node to first position of the list
void enqueue(int data)
{
    struct node *newnode = createnode(data);
    if(rear == NULL)
    {
        rear = newnode;
        front = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

//Delete a node from first position of the list
void dequeue()
{
    if(front == NULL)
    {
        printf("The queue is empty.");
    }
    else
    {
        struct node *temp = front;
        printf("\n%d is deleted.",front->info);
        front = front->next;
        free(temp);
    }
}

int main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    display();
    dequeue();
    display();
    enqueue(3);
    display();
    dequeue();
    display();
    return 0;
}