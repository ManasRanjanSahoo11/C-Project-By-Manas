#include<stdio.h>
void main(){
    int size,i;
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
    int small=a[0];
    for(i=0;i<size;i++){
            if(a[i]<small)
                small=a[i];
        }
    printf("\nSmall element is: %d",small);
}
