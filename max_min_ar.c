#include <stdio.h>

int main() {
    int ar[10];
    int i;
    printf("Enter the elements: ");

    for (i = 0; i < 10; i++) 
    {
        scanf("%d", &ar[i]);
    }

    int max = ar[0];
    int min = ar[0]; 

    for (i = 1; i < 10; i++) 
    {
        if (max < ar[i]) 
        {
            max = ar[i];
        }
        if (min > ar[i]) 
        {
            min = ar[i];
        }
    }
    printf("Maximum number is %d\n", max);
    printf("Minimum number is %d\n", min);
}
