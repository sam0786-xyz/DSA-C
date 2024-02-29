#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct database
{
    int no;
    char name[1000];
    struct database *next;
} *start = NULL;

void insertf()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter the serial number: ");
    scanf("%d", &newnode->no);
    printf("Enter your name: ");
    scanf("%s", newnode->name);

    if (start == NULL)
    {
        newnode->next = newnode; // Point to itself as it's the only node in the circular list
        start = newnode;
    }
    else
    {
        struct database *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newnode; // Point the last node to the new node
        newnode->next = start; // Make the new node point to the first node
        start = newnode; // Update start to new node
    }
}

void insertl()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter serial number: ");
    scanf("%d", &newnode->no);
    printf("Enter your name: ");
    scanf("%s", newnode->name);

    if (start == NULL)
    {
        newnode->next = newnode; // Point to itself as it's the only node in the circular list
        start = newnode;
    }
    else
    {
        struct database *temp = start;
        while (temp->next != start)
        {
            temp = temp->next;
        }
        temp->next = newnode; // Point the last node to the new node
        newnode->next = start; // Make the new node point to the first node
    }
}

void display()
{
    struct database *temp = start;

    if (start == NULL)
    {
        printf("Linked list is empty.\n");
    }
    else
    {
        printf("The Circular List contents are:\n");
        do
        {
            printf("S.no: %d ", temp->no);
            printf("Name:%s\n", temp->name);
            temp = temp->next;
        } while (temp != start);
    }
}

void insertb()
{
    int position;
    printf("Enter the position where you want to insert: ");
    scanf("%d", &position);

    if (position < 1)
    {
        printf("Invalid position.\n");
        return;
    }

    struct database *newnode, *temp;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter serial number: ");
    scanf("%d", &newnode->no);
    printf("Enter your name: ");
    scanf("%s", newnode->name);

    if (start == NULL)
    {
        newnode->next = newnode; // Point to itself as it's the only node in the circular list
        start = newnode;
    }
    else if (position == 1)
    {
        struct database *last = start;
        while (last->next != start)
        {
            last = last->next;
        }
        newnode->next = start; // Point the new node to the current start node
        start = newnode;       // Update the start pointer to the new node
        last->next = newnode;  // Point the last node to the new start node
    }
    else 
    {
        temp = start;
        for (int i = 1; i < position - 1 && temp->next != start; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Position out of range.\n");
            return;
        }

        newnode->next = temp->next; // Point the new node to the next node of the current position
        temp->next = newnode;       // Point the current node to the new node
    }
}


int main()
{
    int x, a;

    do
    {
        printf("\nMenu:\n");
        printf("1. Insertion\n");
        printf("2. Display\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1: // Insertion
            do
            {
                printf("Enter the insertion you want to perform:\n 1. Insert First\n 2. Insert Last\n");
                scanf("%d", &a);
                switch (a)
                {
                case 1:
                    insertf();
                    break;
                case 2:
                    insertl();
                    break;
                default:
                    printf("Going to main menu!\n");
                    break;
                }
            } while (a != 3);

            break;

        case 2: // Traversal
            display(); // No need to pass start pointer here
            break;

        case 3:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (x != 3);

    return 0;
}
