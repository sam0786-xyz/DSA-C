#include <stdio.h>

int main() 
{
    int ar[5];
    int x, index, value, i;

    printf("Enter the elements: ");
    for (i = 0; i < 4; i++) 
    {
        scanf("%d", &ar[i]);
    }

    do 
    {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x) 
        {
            case 1: // Insertion
            {
                printf("Enter an index to add on: \n");
                scanf("%d", &index);
                printf("Enter an element to add: \n");
                scanf("%d", &value);

                for (i = 4; i >= index; i--)
                {
                    ar[i] = ar[i - 1];
                }
                ar[index] = value;

                break;
            }

            case 2: // Deletion
            {
                printf("Enter an index to delete: \n");
                scanf("%d", &index);
                printf("Element to be deleted is: %d\n", ar[index]);

                for (i = index; i < 4; i++) 
                {
                    ar[i] = ar[i + 1];
                }
                
                break;
            }

            case 3: // Traversal
            {
                printf("Elements are: \n");
                for (i = 0; i < 5; i++)
                {
                    printf("%d ", ar[i]);
                }
                printf("\n"); 
                break;
            }

            default:
                printf("Invalid choice!\n");
                break; 
        }
    } 
    while (x != 4);

    printf("Exiting program...\n");
    return 0;
}
