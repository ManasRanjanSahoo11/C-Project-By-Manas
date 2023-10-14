#include<stdio.h>
void main(){
    int i,j;

    for (i=1, j=10; i < j; i++,j--)
    {
        if(i==j){
            break;
        }
        printf("%d \n",i+j);
    }
    
}