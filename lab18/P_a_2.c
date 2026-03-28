#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// push
void push(int n)
{
    if (top == MAX - 1)
        printf("Overflow\n");
    else
        stack[++top] = n;
}

// pop
int pop()
{
    if (top == -1)
    {
        printf("Underflow\n");
        return 0;
    }
    return stack[top--];
}

// insert at bottom
void insert_bottom(int x)
{
    if (top == -1)
    {
        push(x);
        return;
    }

    int temp = pop();
    insert_bottom(x);
    push(temp);
}

// reverse stack
void reverse()
{
    if (top == -1)
        return;

    int temp = pop();
    reverse();
    insert_bottom(temp);   
}

// display
void display()
{
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    int n, i, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        push(val);
    }

    printf("Original stack:\n");
    display();

    reverse();

    printf("Reversed stack:\n");
    display();

    return 0;
}