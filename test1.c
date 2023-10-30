#include<stdio.h>
void main(){
    // int i,j;

    // for (i=1, j=10; i < j; i++,j--)
    // {
    //     if(i==j){
    //         break;
    //     }
    //     printf("%d \n",i+j);
    // }

    int a=3, b=4, c=3, d=4, x,y;
    x= (a=5) && (b=7);
    y=(c=5) || (d=8);
    printf("%d %d %d %d %d %d",a,b,c,d,x,y);
    x= (a==6) && (b=9);
    y= (c==6) || (d=10);
    printf("\n%d %d %d %d %d %d",a,b,c,d,x,y);

    
}