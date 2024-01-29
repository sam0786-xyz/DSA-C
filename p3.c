#include <stdio.h>

int main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3];

    int i,j,k;
    //Taking 1st matrix as input.
    for (i = 0; i < 3; i++)
    {
        printf("Enter the elements of the 1st matrix by row %d\n", i + 1);

        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Taking 2nd Matrix as input.
    for (i = 0; i < 3; i++)
    {
        printf("Enter the elements of the 2nd matrix by row %d\n", i + 1);

        for (j = 0; j < 3; j++)
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
        printf("5. To see resultant matrix\n");
        printf("Enter your choice: ");
        scanf("%d", &x);

        switch (x) 
        {
            case 1: // Addition
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                    }
                }
                printf("Addition performed :)\n");

                break;
            }
            case 2: // Subtraction
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat3[i][j] = mat1[i][j] - mat2[i][j];
                    }
                }
                printf("Subtraction performed :)\n");
                break;
            }
            case 3: // Multiplication
            {
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        mat3[i][j] = 0;
                        for (k = 0; k < 3; k++)
                        {
                            mat3[i][j] += mat1[i][k] * mat2[k][j];
                        }
                    }
                }
                printf("Multiplication performed :)\n");
                
                break;
            }
            case 4: // Transpose
            {
                for (i = 0; i < 3; i++) 
                {
                    for (j = 0; j < 3; j++) 
                    {
                        mat3[j][i] = mat1[i][j];  // Swap rows and columns
                    }
                }

                break;
            }
            case 5: //Resultant
            {
                for (i = 0; i < 3; i++) 
                {
                    for (j = 0; j < 3; j++) 
                    {
                        printf("%d",mat3[i][j]);
                    }
                    printf("\n");
                }

                break;
            }

            default:
                printf("Invalid choice!\n");
                printf("Exiting program...\n");
                return 1;
                break; 
        }
    } 
    while (x != 6 );

    printf("Exiting program...\n");
    return 0;
}
