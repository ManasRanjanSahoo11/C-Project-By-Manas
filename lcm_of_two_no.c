#include<stdio.h>
void main(){
    int a,b,l;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    
    for(l=1;l<=a*b;l++){
        if(l%a==0&&l%b==0)
        break;
    }
 
// for efficient :->

    // for(l=a>b?a:b;l<=a*b;l++){
    //     if(l%a==0&&l%b==0)
    //     break;
    // }

    // for(l=a>b?a:b;l<=a*b;l=l+(a>b?a:b)){
    //     if(l%a==0&&l%b==0)
    //     break;
    // }
    
    printf("LCM = %d",l);
}