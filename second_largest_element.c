#include<stdio.h>
#include<limits.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("enter the elements os array :");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("\nelements are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);

    int max=INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<size;i++){
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
    }
    for(int i=0;i<size;i++){
      if (smax<a[i] && a[i] != max)
        {
            smax=a[i];
        }  
    }
    printf("\n2nd largest :%d",smax);
    }