#include <stdio.h>
void main()
{
    int size, i, j, k;
    printf("Enter the size :");
    scanf("%d", &size);
    int a[size], temp[size];
    printf("Enter the elements :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements are :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size; k++)
                {
                    a[k] = a[k + 1];
                }
            size--;
            j--;
            }
        }
    }

    printf("\nAfter deleted duplicate element,new array is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}