#include<stdio.h>
void main(){
    int size,pos;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements :");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Elements are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);

    printf("Enter the position you want to delete :");
    scanf("%d",&pos);

    // delete operation

    for(int i=pos-1;i<size-1;i++)
        a[i]=a[i+1];

    size--;
    printf("new array is are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
}