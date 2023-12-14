#include<stdio.h>
#include<string.h>

void main(){
    int size1, size2;
    printf("Enter the size of 1st string :");
    scanf("%d",&size1);

    printf("Enter the size of 2nd string :");
    scanf("%d",&size2);

    char a[size1], b[size1+size2];

    printf("Enter the 1st String :");
    scanf("%s",a);
    //gets(a);

    printf("\nEnter the 2nd String :");
    scanf("%s",b);
    // gets(b);

    int i=0, j=strlen(b);

    while(a[i] != '\0'){
        b[j]=a[i];
        i++;
        j++;
    }
    b[j]='\0';
    puts(b);
}