#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Linked List
struct database
{
    char name[1000];
    char section[1000];
    struct database *next;
} *start;

void insertf()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter your Name: ");
    scanf("%s", newnode->name);
    printf("Enter your section: ");
    scanf("%s", newnode->section);

    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        newnode->next = start;
        start = newnode;
    }
}

void insertl()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter your Name: ");
    scanf("%s", newnode->name);
    printf("Enter your section: ");
    scanf("%s", newnode->section);

    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        struct database *ptr;
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newnode;
    }
}

void insertB()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter your Name: ");
    scanf("%s", newnode->name);
    printf("Enter your section: ");
    scanf("%s", newnode->section);

    newnode->next = NULL;
    if (start == NULL)
        start = newnode;
    else
    {
        struct database *ptr1, *ptr2;
        ptr1 = start;
        ptr2 = start->next;
        while (strcmp(ptr1->name, "Sam") != 0 && ptr2 != NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }

        newnode->next = ptr2;
        ptr1->next = newnode;
    }
}

void display(struct database *head)
{
    struct database *newnode = head;

    printf("Linked list contents:\n");

    while (newnode != NULL)
    {
        printf("Name: %s\n", newnode->name);
        newnode = newnode->next;
    }
}

void deletef()
{
    if (start == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct database *temp = start;
    start = start->next;
    free(temp);
    printf("Deleted the first node.\n");
}

void deletel()
{
    if (start == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    struct database *ptr1 = start;
    struct database *ptr2 = NULL;

    while (ptr1->next != NULL)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }

    if (ptr2 == NULL)
    {
        // Only one node in the list
        free(ptr1);
        start = NULL;
    }
    else
    {
        // More than one node in the list
        ptr2->next = NULL;
        free(ptr1);
        printf("Deleted the last node.\n");
    }
}

void deleteB()
{
    if (start == NULL)
    {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    char targetName[1000];
    printf("Enter the name to delete: ");
    scanf("%s", targetName);

    struct database *ptr1 = start;
    struct database *ptr2 = NULL;

    while (ptr1 != NULL && strcmp(ptr1->name, targetName) != 0)
    {
        ptr2 = ptr1;
        ptr1 = ptr1->next;
    }

    if (ptr1 == NULL)
    {
        printf("Name not found in the list.\n");
        return;
    }

    if (ptr2 == NULL)
    {
        // Deleting the first node
        start = start->next;
        free(ptr1);
    }
    else
    {
        // Deleting a node that is not the first one
        ptr2->next = ptr1->next;
        free(ptr1);
    }

    printf("Deleted node with name: %s\n", targetName);
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
            do
            {
                printf("\nEnter your choice for the operations:\n ");
                printf("1. Insert First\n");
                printf("2. Insert Last\n");
                printf("3. Insert Between\n");
                printf("4. Exit\n");
                scanf("%d", &a);

                switch (a)
                {
                case 1:
                    insertf();
                    break;
                case 2:
                    insertl();
                    break;
                case 3:
                    insertB();
                    break;
                }
            } while (a != 4);
            break;

        case 2: // Deletion
            do
            {
                printf("\nEnter your choice for the operations:\n ");
                printf("1. Delete First\n");
                printf("2. Delete Last\n");
                printf("3. Delete from any position\n");
                printf("4. Exit\n");
                scanf("%d", &a);

                switch (a)
                {
                case 1:
                    deletef();
                    break;
                case 2:
                    deletel();
                    break;
                case 3:
                    deleteB();
                    break;
                }
            } while (a != 4);
            break;

        case 3: // Traversal
            display(start); // Pass the start pointer to the display function
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (x != 4);

    printf("Exiting program...\n");
    return 0;
}