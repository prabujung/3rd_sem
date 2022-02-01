#include <stdio.h>
#include <stdlib.h>
#define size 5

struct stack
{
	int info[size];
	int top;
};

int isEmpty(struct stack *s)
{
	if (s->top == -1)
		return 1;
	else
		return 0;
}

int isFull(struct stack *s)
{
	if (s->top == size - 1)
		return 1;
	else 
		return 0;
	
}

void push(struct stack *s, int x)
{
	if (isFull(s))
	{
		printf("Stack overflow");
	}
	else
	{
		s->top++;
		s->info[s->top] = x;
	}
}

void Display(struct stack *s)
{
	for (int i = 0; i <= s->top ; i++)
	{
		printf("%d ", s->info[i]);
	}
}

void pop(struct stack *s)
{

	if (isEmpty(s))
	{
		printf("Stack is empty");
	}
	else
	{
		s->top--;
	}
}


int main()
{
	struct stack *stack;
	stack = (struct stack *)malloc(sizeof(struct stack));
	stack->top = -1;
	push(stack, 10);
	push(stack, 30);
	push(stack, 54);
	push(stack, 56);
	Display(stack);
	printf("\n");
	pop(stack);
	Display(stack);
	printf("\n");
	pop(stack);
	pop(stack);
	Display(stack);
	printf("\n");
	return 0;
}
