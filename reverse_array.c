#include<stdio.h>
void main(){
    int size,i;
    printf("Firstly you enter the size of array :");
    scanf("%d",&size);

    int arr[size];

    printf("Enter the elements of array :");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    printf("The Elements are :");
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n\nReverse of Array :");
    for(i=size-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}