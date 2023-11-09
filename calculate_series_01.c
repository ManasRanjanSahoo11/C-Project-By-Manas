#include<stdio.h>
void main(){
    int i,j=1;
    float k=0;
    for(i=1;i<=50;i++){
        k=k+((float)1/i);
    }
    printf("Value of series : %.2f",k);
}