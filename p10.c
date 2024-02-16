#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int x;
    printf("Enter the value: ");
    scanf("%d",&x);

    if (top == SIZE-1)
        printf("Overflow");
    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
        printf("Underflow");
    else
    {
        printf("Delete = %d", stack[top]);
        top--;
    }
}

void display() 
{
    if (top == -1) 
    {
        printf("Empty\n");
    } 
    
    else 
    {
        for (int i = top; i >= 0; i--) 
        {
            printf("%d", stack[i]);
        }

        printf("\n");
    }
}

int main()
{
    int x, a;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1: // Insertion

            for(int i=0; i<SIZE; i++)
            {
                push();
            }
            break;

        case 2: // Deletion
            
            for(int i=0; i<SIZE; i++)
            {
                pop();
            }
            break;

            break;

        case 3: // Traversal
            
            display();
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (x != 4);

    printf("Exiting program...\n");
    return 0;
}