#include<stdio.h>
void main(){
    int size,flag;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter the elements :");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    printf("\nElements are :");
    for(int i=0;i<size;i++){
        printf("%d ",a[i]);
    }

   for(int i=0;i<size;i++){
    flag=0;
    for(int j=i+1;j<size;j++)
    {
        if(a[i] == a[j]){
            flag=1;
        }
        if(flag == 0){
            printf("\n%d", a[i]);
            break;
        }
    }
   }
    
}