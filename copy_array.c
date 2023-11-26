#include<stdio.h>
void main(){
    int size,i;
    printf("Enter size");
    scanf("%d",&size);

    int a[size],b[size];

    printf("Enter the elements:");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    printf("\nElements are :");
    for(i=0;i<size;i++)
    printf("%d ",a[i]);

    for(i=0;i<size;i++){
        b[i]=a[i];
    }

    printf("\nCopied array is :");

    for(i=0;i<size;i++)
    printf("%d ",b[i]);
}