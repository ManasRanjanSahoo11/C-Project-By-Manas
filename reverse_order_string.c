#include<stdio.h>
#include<string.h>

void main(){
    int i;
    char a[50];

    printf("Enter a string :");
    scanf("%s",&a);

    int len = strlen(a);

    for(i=len-1;i>=0;i--){
        printf("%c",a[i]);
    }
}