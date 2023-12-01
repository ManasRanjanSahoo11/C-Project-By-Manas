#include <stdio.h>
void main()
{
    int size;
    printf("Enter the size of array :");
    scanf("%d", &size);
    int a[size];
    printf("Enter the element :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nElements are :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    int i=0;
    int temp;
    int j=size-1;
    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    printf("\nNew Elements are :");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}