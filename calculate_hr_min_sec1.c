#include<stdio.h>
void main(){
    int hr,min,sec;
    printf("Enter total seconds :");
    scanf("%d",&sec);

    hr = sec/3600; //1 hours = 3600 seconds.
    sec=sec%3600; 

    min = sec/60; // 1 minutes = 60 seconds.

    sec = sec % 60; // here find second.
    printf("HH:MM:SS = %d %d %d",hr,min,sec);
}