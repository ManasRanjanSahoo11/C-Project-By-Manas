#include <stdio.h>
void main()
{
    int size, i, j, count = 1;
    printf("Enter the size :");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements of an array :");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements are :");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }

    for(i=0;i<size;i++){
        if(a[i+1] > a[i])
            count++;
        else
            count = 1;
    }

    printf("\nlongest subsequence is : %d", count);
}