#include<stdio.h>
#include<stdlib.h>

void main(){
    FILE *p;
    p=fopen("hello.txt","r");

    if(p==NULL){
        printf("error");
        exit(0);
    }

    char ch=fgetc(p);

    printf("%c",ch);

    fclose(p);
    return;
}