#include<stdio.h>
void main(){
    int amt,n100=0,n50=0,n10=0;

    printf("enter amount :");
    scanf("%d",amt);

    if(amt >= 100){
        n100=amt/100;
        amt=amt%100;
    }

    printf("Sucessfully");
    printf("%d",n100);

    // if(amt >= 50){
    //     n50=amt/50;
    //     amt=amt%50;
    // }

    // if(amt >= 10){
    //     n10=amt/10;
    //     amt=amt%10;

    // }

    // printf("%d\n",n100);
    // printf("%d\n",n50);
    // printf("%d\n",n10);

    }