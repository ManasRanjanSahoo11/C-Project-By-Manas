#include<stdio.h>
void main(){
    int n,yr,wk,day;

    printf("Enter days");
    scanf("%d",&n);

    yr=n/365;
    wk=(n%365)/7;
    day=n%365%7;

    printf("Year : %d\n",yr);
    printf("Weeks : %d\n",wk);
    printf("Days : %d",day);
}