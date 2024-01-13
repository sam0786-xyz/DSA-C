#include <stdio.h>

int main()
{
    int m,n,p,q;
    printf("Enter the rows of matrix 1: %d \n");
    scanf("%d", &m);
    printf("Enter the columns of matrix 1: %d \n");
    scanf("%d", &n);
    int mat1[m][n];

    int i, j;

    for (i = 0; i < m; i++)
    {
        printf("Enter the elements of the 1st matrix by row %d\n", i + 1);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Taking 2nd Matrix as input.
    printf("Enter the rows of matrix 1: %d \n");
    scanf("%d", &p);
    printf("Enter the columns of matrix 1: %d \n");
    scanf("%d", &q);
    int mat2[p][q];

    int i, j;

    for (i = 0; i < p; i++)
    {
        printf("Enter the elements of the 1st matrix by row %d\n", i + 1);

        for (j = 0; j < n; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int x;
    do 
    {
        printf("\nMenu:\n");
        printf("1. Addition\n");
        printf("2. Subtration\n");
        printf("3. Multiplication\n");
        printf("4. Transpose\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x) 
        {
            case 1: // Insertion
            {
               

            

                break;
            }

            case 2: // Deletion
            {
                
                
                break;
            }

            case 3: // Traversal
            {
                
                break;
            }

            default:
                printf("Invalid choice!\n");
                break; 
        }
    } 
    while (x != 5);

    printf("Exiting program...\n");
    return 0;
}
