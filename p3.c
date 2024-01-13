#include <stdio.h>

int main()
{
    int m[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
    printf("Enter the elements of the 1st matrix by row %d\n", i + 1);
    for (j = 0; j < 3; j++)
    {
    scanf("%d", &m[i][j]);
    }
    }

    // Taking 2nd Matrix as input.
    int p[3][3];
    for (i = 0; i < 3; i++)
    {
    printf("Enter the elements of the 2nd matrix by row %d\n", i + 1);
    for (j = 0; j < 3; j++)
    {
    scanf("%d", &p[i][j]);
    }
}
