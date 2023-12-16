#include<stdio.h>
#include<stdbool.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements into the array :");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);

    printf("Elements are :");
    for(int i=0;i<size;i++)
    printf("%d ",a[i]);

    int i=0, j=size-1; 
    bool flag=false;

    while(i<j){
        if(a[i] == a[j]){
            flag=true;
            printf("\nArray is palindrome");
            break;
        }
        i++;
        j--;   
    }
    if(flag==false)
    printf("\nArray is not paplindrome !");
}