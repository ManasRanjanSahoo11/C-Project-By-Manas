#include<stdio.h>
void main(){
    int size,i,element;
    printf("First you enter the size of array :");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nElements are :");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    printf("\nEnter the element insert into beginning of array :");
    scanf("%d",&element);

    size++;

    for(i=size;i>1;i--){
        a[i-1]=a[i-2];
    }

    a[0]=element;

    printf("\nNew array becomes :");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}