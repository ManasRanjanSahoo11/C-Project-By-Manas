#include<stdio.h>
void main(){
    int size,i,element;
    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter elements of array :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nElements are :");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    printf("\nEnter elements which is insert into ending of the array :");
    scanf("%d",&element);

    size++;

    a[size-1]=element;

    printf("\nNew array becomes :");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}