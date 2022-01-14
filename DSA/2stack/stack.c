#include <stdio.h>
#include <stdlib.h>


struct stack
{
    int top;
    int index[10];
};

void push(struct stack *ab)
{   
    int data;
    if(ab->top == 9)
        printf("The stack is full.");
    else
    {
        printf("Enter data : ");
        scanf("%d",&data);
        ab->index[++ab->top] = data;
    }
}

void pop(struct stack *ab)
{
    if(ab->top == -1)
        printf("The stack is empty.");
    else
    {
        printf("data = %d",ab->index[ab->top]);
        --ab->top;
    }
}

void display(struct stack *ab)
{
    for(int i = 0; i<=ab->top; i++)
    {
        printf("%d", ab->index[ab->top]);
        ab->top--;
    }
}

int main()
{   
    int choice;
    printf("\n1.Push\n2.Pop\n3.Traverse\n4.Exit\nEnter a choice :");
    scanf("%d",&choice);
    while(choice > 4 || choice < 1)
    {
        printf("\nPlease enter valid choice : ");
        scanf("%d",&choice);
    }
    struct stack s;
    s.top=-1;
    switch(choice)
    {
        case 1:
            push(&s);
            break;

        case 2:
            pop(&s);
            break;
        
        case 3:
            display(&s);
            break;
        
        case 4:
            exit(1);
    }
    return 0;
}
