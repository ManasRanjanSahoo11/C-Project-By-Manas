#include<stdio.h>
void main(){
    int size,i,j,count=0;
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
    // i=0;
    // j=i+1;
    // while (a[j] >= a[i])
    // {
    // count++; 
    // if(a[j] < a[i])
    //    count=0;
    // i++;
    // j++;
    // }
  
    printf("\nlongest subsequence is : %d",count);
}