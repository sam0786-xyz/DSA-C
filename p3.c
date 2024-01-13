#include <stdio.h>

int mat1(int m, int n);
int mat2(int p, int q);

int main()
{
   int m, n, p, q;

   // Get dimensions of matrix1
   mat1(m, n);

   // Get dimensions of matrix2
   mat2(p, q);

   // You can now use the matrices mat1[m][n] and mat2[p][q] for further operations

   return 0;
}

int mat1(int m, int n)
{
   int mat1[m][n];

   printf("Enter the rows of matrix1: ");
   scanf("%d", &m);
   printf("Enter the columns of matrix1: ");
   scanf("%d", &n);

   printf("Enter the elements of matrix1:\n");
   for (int i = 0; i < m; i++)
   {
       for (int j = 0; j < n; j++)
       {
           scanf("%d", &mat1[i][j]);
       }
   }

   return 0;
}

int mat2(int p, int q)
{
   int mat2[p][q];

   printf("Enter the rows of matrix2: ");
   scanf("%d", &p);
   printf("Enter the columns of matrix2: ");
   scanf("%d", &q);

   printf("Enter the elements of matrix2:\n");
   for (int i = 0; i < p; i++)
   {
       for (int j = 0; j < q; j++)
       {
           scanf("%d", &mat2[i][j]);
       }
   }

   return 0;
}
