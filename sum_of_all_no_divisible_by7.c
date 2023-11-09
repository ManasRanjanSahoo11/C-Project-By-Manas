#include<stdio.h>
void main(){
    int n1,n2,sum=0;
    printf("Give a range :");
    scanf("%d%d",&n1,&n2);
    for(int i=n1;i<=n2;i++){
        if(i%17==0)
        sum=sum+i;
    }
    printf("Sum =%d",sum);
}