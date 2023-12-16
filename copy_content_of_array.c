#include<stdio.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];
    int b[size];

    printf("Enter the array elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("\nElements are :");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    printf("\nCopy the content of array :");
    for(int i=0;i<size;i++){
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    
}