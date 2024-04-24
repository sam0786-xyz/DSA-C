#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int queue[SIZE];
int front = -1;
int rear = -1;

void push()
{
    int x;
    if ((rear+1)%SIZE==front)
        printf("Queue Overflow");
    else
    {
        printf("Enter an element: ");
        scanf("%d",&x);
        if(rear==-1 && front==-1)
        {
            rear = 0;
            front = 0;
        }
        else
        {
            rear = (rear + 1) % SIZE;
            queue[rear]=x;
        }
    }
}

void display()
{
    if(rear==-1)
        printf("Queue is Empty");
    else
    {
        printf("Elements of Queue:\n ");
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
        printf("Queue is empty.");
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
            front = (front+1) % SIZE;
        }
    }
    printf("Popped Element: %d",y);
}

int main()
{
    int choice;
    do
    {
        printf("\tCircular Queue Operations\t");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
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