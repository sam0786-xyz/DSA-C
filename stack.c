#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int stack[SIZE], top = -1;

void push()
{
    int x;
    if (top==SIZE-1)
        printf("Stack Overflow");
    else
    {
        printf("Enter an element: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}

void display()
{
    if(top==-1)
        printf("Stack is Empty");
    else
    {
        printf("Elements of stack:\n ");
        for(int i=top; i>=0; i--)
        {
            printf("%d \n",stack[i]);
        }
    }
}

void pop()
{
    if (top==-1)
        printf("Stack is empty.");
    else
    {
        printf("Popped Element: %d",stack[top]);
        top--;
    }
}

int main()
{
    int choice;
    do
    {
        printf("Stack Operations\n");
        printf("\n1.push\n2.pop\n3.display\n4.exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch (choice)
        {   
            case 1:
                push();
                push();
                push();
                push();
            break;

            case 2: 
                pop();
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Exiting program...");
            break;
        }
    } while (choice!=4);
    
}