#include<stdio.h>
void main(){
    int i,j,k;
    for ( i=1;i<=6;i++){
        // k=1;
        k='A';
        for(j=1;j<=6;j++){
            if(j<=7-i){
            //   printf("%d ",k++);
              printf("%c ",k++);
            }
            else
              printf(" ");
        }
        printf("\n");
    }
}