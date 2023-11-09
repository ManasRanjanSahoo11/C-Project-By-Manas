#include<stdio.h>
#include<stdlib.h>
void main(){
    int m,count=0,sum=0;
    printf("Enter marks (enter 0 or nagative number to terminate)");
    while(1){
        scanf("%d",m);
        count++;
        if(m==0 || m<0){
        exit(0);
        }
        sum =sum+m;
    }
        float avg=sum/count;
        printf("Average :%f",avg);
    
}