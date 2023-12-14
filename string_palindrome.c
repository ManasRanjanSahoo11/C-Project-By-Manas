#include<stdio.h>
void main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);

    char a[size];

    printf("Enter the String :");
    scanf("%s",a);
    
    int i=0, j=size-1, flag=0;

    while(i<j){
        if(a[i] == a[j]){
            flag=1;
            i++;
            j--;
            break;
        }
        // else{
        //     flag=0;
        //     break;
        // }

    }
    if(flag == 1)
    printf("palindrome !");
    else
    printf("Not palindrome !!");
}