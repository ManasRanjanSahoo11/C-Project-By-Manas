#include<stdio.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nelements are : ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        if(i%2==0)
            a[i]+=10;
        else
            a[i]*=2;
    }

    printf("\nAfter perform operation: ");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    
}