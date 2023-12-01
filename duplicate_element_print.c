#include<stdio.h>
void main(){
    int size,i,j;

    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements of an array :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("Elements are :");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    printf("\n Duplicate elements :");
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(a[i]==a[j])
                printf("%d ",a[i]);
        }
    }
}