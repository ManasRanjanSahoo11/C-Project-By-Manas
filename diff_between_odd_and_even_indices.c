#include <stdio.h>
void main()
{
    int size;
    printf("Enter the size :");
    scanf("%d", &size);
    int a[size];
    printf("enter the elements :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nelements are : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    int sumeven = 0, sumodd = 0;

    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
            sumeven += a[i];
        else
            sumodd += a[i];
    }

    int diff = sumeven - sumodd;
    printf("\nSum of even indices : %d", sumeven);
    printf("\nSum of odd indices: %d", sumodd);
    printf("\nDiffernce : %d", diff);
}