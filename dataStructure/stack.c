#include <stdio.h>
#define Max 100


typedef struct
{
    int item[Max];
    int top;
} Stack;

void initialize(Stack *s)
{
    s->top = -1;
}

int isFull(Stack *s)
{
    return s->top == Max - 1;
}

int isEmpty(Stack *s)
{
    return s->top == -1;
}

void push(Stack *s, int data)
{
    if (isFull(s))
    {
        printf("Stack overflow");
        return;
    }
    s->item[++(s->top)] = data;
}

int pop(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow");
        return -1;
    }
    return s->item[(s->top)--];
}

void display(Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty");
        return;
    }
    printf("Stack elements are : \n");
    for (int i = s->top; i >= 0; i--)
    {
        printf("%d \t", s->item[i]);
    }
}

int main()
{
    Stack *s;
    initialize(&s);
    push(&s, 5);
    push(&s, 10);
    push(&s, 15);
    pop(&s);
    display(&s);
    return 0;
}