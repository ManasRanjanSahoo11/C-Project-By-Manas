#include<stdio.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements into the array :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nelements you entered into the array :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }

    int i=0, j=size-1, temp;

    while(i<j){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }

    printf("\nReverse of array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
}