#include<stdio.h>
void main(){
    int size,i;
    printf("enter the size of the array :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("Elements Are :");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    printf("\n\nEven Elements are :");
    for(i=0;i<size;i++){
        if(arr[i]%2==0)
        printf("%d ",arr[i]);
    }

    printf("\n\nOdd Elements are :");
    for(i=0;i<size;i++){
        if(arr[i]%2!=0)
        printf("%d ",arr[i]);
    }
}