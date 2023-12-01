#include<stdio.h>
void main(){
    int i,size;
    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];

    printf("enter the elements :");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    printf("Elements are :");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);

    size--;

    printf("\nAfter deleted end position of an array, then the new array becomes :");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    

}