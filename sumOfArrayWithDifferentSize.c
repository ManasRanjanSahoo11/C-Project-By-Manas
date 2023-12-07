#include <stdio.h>
int sumArray(int a[], int size);
void main()
{
    int a[5]={1,2,3,4};
    int b[10]={10,20,30,40,50,60,70};
    int c[20]={1,2,3,4,5,6,7,8,9,10};
    sumArray(a,5);
    sumArray(b,10);
    sumArray(c,20);
}

int sumArray(int a[], int size)
{
    int i;
    int sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + a[i];
    }
    printf("\nSum= %d", sum);
}
