#include<stdio.h>
void main(){
    int a,b,c,d,r1,r2;
    printf("Enter the three number :");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d>0){
        r1=-(b+d)/2*a;
        r2=-(b-d)/2*a;
        printf("x=%d, x=%d\n",r1,r2);
        printf("Real and distinct roots");
    }
    else if(d==0){
        r1=-(b+d)/2*a;
        r2=-(b-d)/2*a;
        printf("x=%d, x=%d\n",r1,r2);
        printf("Real and Equal roots");
    }
    else{
        r1=-(b+d)/2*a;
        r2=-(b-d)/2*a;
        printf("x=%d, x=%d\n",r1,r2);
        printf("Imaginary roots");
    }

}