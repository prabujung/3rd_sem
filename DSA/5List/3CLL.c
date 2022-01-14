#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *next;
};

//header declaration
struct node *head = NULL;

//Display list elements
void display()
{
    struct node *p = head;
    printf("\n[ ");
    while(p != head)
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
    return newnode;
}

//Insert a node to first position of the list
void f_insert(int data)
{
    struct node *newnode = createnode(data);
    struct node *temp = head;
    while(temp->next != head)
        temp = temp->next;
    newnode->next = head;
    temp->next = newnode;
    head = newnode;
}

//Insert a node to last position of the list
void e_insert(int data)
{
    struct node *newnode = createnode(data);
    if(head == NULL)
    {
        head = newnode;
        newnode->next = head;
    }
    else
    {
        struct node *temp = head;
        while(temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
    }
}

//Insert a node to a specified position of the list
void n_insert(int data, int position)
{
    struct node *newnode = createnode(data);
    struct node *temp = head;
    if(head == NULL)
    {
        printf("the list is empty. %d is inserted at beginning of the list.");
        f_insert(data);
    }
    
    for(int i=1; i < position - 1 ; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

//Delete a node from first position of the list
void f_delete()
{
    struct node *temp = head;
    printf("\n%d is deleted.",head->info);
    head = head->next;
    free(temp);
}

//Delete a node from last position of the list
void e_delete()
{
    struct node *temp = head;
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    printf("\n%d is deleted.",temp->next->info);
    free(temp->next);
    temp->next = NULL;

}

//Delete a node from a specified position
void n_delete(int position)
{
    struct node *p;
    struct node *temp = head;
    for(int i=1; i < position - 1 ; i++)
    {
        temp = temp->next;
    }
    printf("\n%d is deleted.", temp->next->info);
    p = temp->next;
    temp->next = p->next;
    free(p);
}

//Search a given data from the list
void search(int data)
{
    int i = 1;
    struct node *temp = head;
    while(temp->info != data)
    {
        temp = temp->next;
        i++;
    }
    printf("\n%d is found in the list in position %d.",data,i);
}


int main()
{
    e_insert(2);
    e_insert(9);
    e_insert(7);
    e_insert(6);
    f_insert(1);
    //n_insert(3,3);
    display();
    return 0;
}