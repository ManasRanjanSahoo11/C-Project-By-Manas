#include<stdio.h>
void main(){
    int size,i,sum=0;
    printf("Firstly you enter the size of array :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the Elements :");

    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are :");

    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    for(i=0;i<size;i++){
        sum=sum+a[i];
    }
    printf("\nSum of all elements :%d",sum);
}