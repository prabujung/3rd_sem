#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

struct node *head = NULL;

void display()
{
    struct node *p = head;
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
void push(int data)
{
    struct node *newnode = createnode(data);
    newnode->next = head;
    head = newnode;
}

//Delete a node from first position of the list
void pop()
{
    struct node *temp = head;
    printf("\n%d is deleted.",head->info);
    head = head->next;
    free(temp);
}

int main()
{
    push(5);
    push(6);
    push(7);
    display();
    pop();
    display();

    return 0;
}