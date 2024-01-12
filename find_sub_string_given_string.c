#include<stdio.h>
#include<string.h>

void main(){
    char a[20],b[20];
    int i, j, l1, l2;
    printf("Enter string :");
    gets(a);
    printf("Enter substring form given string :");
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++){
        for(j=0;j<l2;j++){
            if(a[i+j]!=b[j])
              break;
        }
        if(j==l2)
        printf("Substring is fonud");
    }
}