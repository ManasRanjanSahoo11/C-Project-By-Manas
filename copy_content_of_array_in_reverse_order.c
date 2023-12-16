#include<stdio.h>
void main(){
    int size;
    printf("enter the size :");
    scanf("%d",&size);

    int a[size];
    int b[size];

    printf("Enter elements of array :");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nElements of array :");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    printf("\ncopied array :");
    for(int i=0;i<size;i++){
        b[i]=a[i];
        printf("%d ",b[i]);
    }
    printf("\nCopied array in reverse order :");
    for(int i=size-1;i>=0;i--){
        printf("%d ",b[i]);

    }
    
}