#include<stdio.h>

void main()
{
    FILE *fp=fopen("creative.txt","r");
    char ch;
    
    if(fp==NULL){
        printf("File can't Be Opened");
    }
    while ((ch=getc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    
}