#include<stdio.h>
void main(){
    int big,small,size,i;
    
    printf("Enter the size of array :");
    scanf("%d",&size);

    int a[size];

    printf("Enter the elements :");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    
    printf("The elements are:");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }

    big=small=a[0];

    for(i=0;i<size;i++){
        if(a[i]>big)
        big=a[i];
        if(a[i]<small)
        small=a[i];
    }
    printf("\nBiggest Element :%d",big);
    printf("\nSmallest Element :%d",small);


}