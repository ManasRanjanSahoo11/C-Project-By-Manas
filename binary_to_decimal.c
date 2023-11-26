#include<stdio.h>
#include<math.h>

void main(){
    int b,rem,i=0,deci=0;
    printf("Enter the Binary number :");
    scanf("%d",&b);

    while (b!=0)
    {
        rem=b%10;
        b=b/10;
        deci=deci+rem*pow(2,i);
        i++;
    }
    printf("%d",deci);
    
}