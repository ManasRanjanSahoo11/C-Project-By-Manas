#include<stdio.h>
void main()
{
    int n, yr, mn, d;
    printf("Enter the Integer :");
    scanf("%d",&n);

    yr=n/365; // 1years = 365 days
    n=n%365;
    mn=n/30; //1months = 30days
    d=n%30;
    printf("%d Years, %d Months, %d Days",yr,mn,d);
}