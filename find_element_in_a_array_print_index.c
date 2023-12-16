#include<stdio.h>
void main(){
    int a[5] = {1, 2, 3, 4, 5};
    int x=6;
    int flag=0;
    for(int i=0;i<5;i++){
        if(a[i] == x){
        flag=1;
        printf("Element is found and it's index = %d",i);
        break;
        }
    }
    if(flag == 0)
    printf("Elemet is not found");
}