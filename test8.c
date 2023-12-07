#include <stdio.h>
#include <stdlib.h>
void main(){
    int n;
    printf("Enter a integer :");
    scanf("%d",&n);
    
    if(n>0 && n%2==0)
    printf("positive Even");
    if(n<0 && n%2==0)
    printf("negative Even");
    if(n>0 && n%2 != 0)
    printf("Positive Odd");
    if(n<0 && n%2 != 0)
    printf("negative Odd");
    if(n==0)
    printf("Even");


//examples of abs() :->


  int x = -255;
  int y = abs(x);

  printf("The absolute value of %d is %d\n", x, y);

  return 0;
}