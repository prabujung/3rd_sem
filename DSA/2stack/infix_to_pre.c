#include <stdio.h>
#include <ctype.h> //used for isalnum function
#include <string.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    char exp[100], p[100];
    char *e, x;
    int i = 0;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;
    e = strrev(e);
    while (*e != '\0')
    {
        if (isalnum(*e)) //isalnum checks if the character is alphabet or number
        {
            p[i] = *e;
            i++;
        }
        else if (*e == ')')
            push(*e);
        else if (*e == '(')
        {
            while ((x = pop()) != ')')
            {
                p[i] = x;
                i++;
            }
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                p[i] = pop();
                i++;
            }
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        p[i] = pop();
        i++;
    }
    while(i>=0)
    {
        i--;
        printf("%c",p[i]);  
    }
    return 0;
}