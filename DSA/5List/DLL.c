#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

//header declaration
struct node *head = NULL;

struct node * getnode()
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    return newnode;
}

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

//Insert a node to first position of the list
void f_insert(int data)
{
    struct node *newnode = getnode();
    newnode->info = data;
    newnode->next = head;
    newnode->prev = NULL;
    head = newnode;
}

//Insert a node to last position of the list
void e_insert(int data)
{
    struct node *newnode = getnode();
    if(head == NULL)
    {
        printf("the list is empty. %d is inserted at beginning of the list.",data);
        f_insert(data);
    }
    else
    {
        struct node *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->info = data;
        newnode->prev = temp;
        newnode->next = NULL;
    }
}

//Insert a node to a specified position of the list
void n_insert(int data, int position)
{
    struct node *newnode = getnode();
    struct node *temp = head;
    if(head == NULL)
    {
        printf("the list is empty. %d is inserted at beginning of the list.",data);
        f_insert(data);
    }
    else
    {
    
        for(int i=1; i < position - 1 ; i++)
        {
            temp = temp->next;
        }
        newnode->info = data;
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = newnode;
    }
}

//Delete a node from first position of the list
void f_delete()
{
    printf("\n%d is deleted.",head->info);
    head = head->next;
    head->prev = NULL;
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
    temp->next = NULL;
    free(temp->next);
}

//Delete a node from a specified position
void n_delete(int position)
{
    //struct node *p;
    struct node *temp = head;
    for(int i=1; i < position - 1 ; i++)
    {
        temp = temp->next;
    }
    printf("\n%d is deleted.", temp->next->info);
    //p = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    //free(p);
}

//Search a given data from the list
void search(int data)
{
    int i = 1;
    struct node *temp = head;
    while(temp->info != data)
    {
        if(temp->next == NULL)
        {
            i=0;
            break;
        }
        else
        {
            temp = temp->next;
            i++;
        }       
    }
    if(i!=0)
        printf("\n%d is found in the list in position %d.",data,i);
    else
        printf("\n%d is not found in the list.",data);
}


int main()
{
    e_insert(2);
    e_insert(9);
    e_insert(7);
    e_insert(6);
    f_insert(1);
    n_insert(3,3);
    display();
    f_delete();
    e_delete();
    display();
    n_delete(3);
    display();
    search(10);
    search(3);

    return 0;
}