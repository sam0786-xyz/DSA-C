#include <stdio.h>

int stack[5], top = -1, stackSize = 5; 

void push()
{
    if (top == stackSize - 1) 
    {
        printf("Overflow\n");
    }
    
    printf("Enter the value: ");
    scanf("%d", &stack[++top]);
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
        return;
    }
    printf("Deleted = %d\n", stack[top--]);
}

void display() {
    if (top == -1) {
        printf("Empty\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice,x;

    do {
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

            for(int i=0; i>5; i++)
            {
                void push();
            }
            break;

        case 2: // Deletion
            
            for(int i=0; i>5; i++)
            {
                void pop();
            }
            break;

            break;

        case 3: // Traversal
            
            void display();
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (x != 4);

    printf("Exiting program...\n");
    return 0;
}