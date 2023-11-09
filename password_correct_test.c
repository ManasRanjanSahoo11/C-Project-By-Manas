#include<stdio.h>
#include<stdlib.h>
void main(){
    int p;
    while(1){
        printf("Enter the password :");
        scanf("%d",&p);
        if (p==1234)
        {
            printf("Correct Password");
            exit(0);
        }
        
    }
}