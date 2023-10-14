#include<stdio.h>
void main()
{
    float cel,fah;
    printf("enter the temperature in celsius");
    scanf("%f",&cel);
    fah=(1.8*cel)+32;
    printf("temperature in farenheit=%f",fah);

}