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

    int e;
    printf("Enter a value :");
    scanf("%d",&e);

   int count=0;

   for(int i=0;i<size;i++){
    if (a[i]>e)
    count++;
   }

   printf("%d",count);
}