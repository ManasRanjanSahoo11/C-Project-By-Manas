#include<stdio.h>
void main(){
    int size;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements are :");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    for(int i=0;i<size;i++){
        a[i]=a[i+1];
    }
    size--;

    printf("\nAfter deleted first position of array, then new array becomes :");
     for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
}