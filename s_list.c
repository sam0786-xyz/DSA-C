#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct database
{
    int no;
    char name[1000];
    struct database *next;
} *start=NULL;

void insertf()
{
    struct database *newnode;
    newnode = (struct database *)malloc(sizeof(struct database));

    printf("Enter the serial number: ");
    scanf("%d",&newnode->no);
    printf("Enter your name: ");
    scanf("%s",newnode->name);
    
    newnode->next = NULL;

    if(start == NULL)
    {
        start = newnode;
    }
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

    printf("Enter serial number: ");
    scanf("%d",&newnode->no);
    printf("Enter your name: ");
    scanf("%s",newnode->name);
  
    newnode->next = NULL;

    if(start == NULL)
    {
        start = newnode;
    }
    else 
    {
        struct database *newnode = start; 
        while (newnode->next != NULL) 
        { 
            newnode = newnode->next;
        }
        newnode->next = newnode; 
    }
}

void display(struct database *head)
{
     struct database *newnode =  head;
    if (start == NULL)
    {
        printf("Linked list is empty. ");
    }
    else
    {
        printf("The Single List contents are:\n");
        while(newnode != NULL)
        {
            printf("S.no: %d ",newnode->no);
            printf("Name:%s ",newnode->name);
            newnode = newnode->next;
            printf("\n");
        }
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
        printf("3. exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x)
        {
        case 1: // Insertion
            do
            {
                printf("Enter the insertion you want to perform:\n 1. Insert First\nInsert Last\n");
                scanf("%d",&a);
                switch(a)
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
            display(start); // Pass the start pointer to the display function
            break;

        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (x != 3);

    printf("Exiting program...\n");
    return 0;
}