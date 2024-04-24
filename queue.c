#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void push()
{
    int x;
    if (rear==SIZE-1)
        printf("Stack Overflow");
    else
    {
        printf("Enter an element: ");
        scanf("%d",&x);
        if(rear==-1)
        {
            rear++;
            front++;
        }
        else
        {
            rear++;
            queue[rear]=x;
        }
    }
}

void display()
{
    if(rear==-1)
        printf("Stack is Empty");
    else
    {
        printf("Elements of stack:\n ");
        for(int i=front; i<=rear; i++)
        {
            printf("%d \n",queue[i]);
        }
    }
}

void pop()
{
    int y;
    if (rear==-1)
        printf("Stack is empty.");
    else
    {
        y = queue[front];
        if(front==rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {   
            front++;
        }
    }
    printf("Popped Element: %d",y);
}

int main()
{
    int choice;
    do
    {
        printf("\nStack Operations\n");
        printf("1.push\n2.pop\n3.display\n4.exit\n");
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
                printf("Exiting program...\n");
            break;
        }
    } while (choice!=4);
    
}