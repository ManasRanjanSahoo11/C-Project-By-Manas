#include<stdio.h>
void main(){
    int size,pos,element;
    printf("Enter the size of an array :");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements :");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("Elements are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);

    printf("\nenter the element :");
    scanf("%d",&element);

    printf("\nEnter the position :");
    scanf("%d",&pos);

    size++;

    for(int i=size;i>pos;i--){
        a[size-1]=a[size-2];
    }

    a[pos-1]=element;

    printf("New Elements are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);
    
}