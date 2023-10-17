#include<stdio.h>
void main(){
    int age,amt,time;
    float si;
    printf("Enter age and amount :");
    scanf("%d%d",&age,&amt);
    if(age>=18 && age<=55 && amt>=10000 && amt<=100000)
    {
        if(age<=25){
            time=30;
        }
        else if(age<=40){
            time=20;
        }
        else{
            time=10;
        }
        si=amt*time*5/100.0;
        printf("Your maturity amount wiil be :%.2f",amt+si);

    }
    else{
        printf("You are not eligible for scheme");
    }
}