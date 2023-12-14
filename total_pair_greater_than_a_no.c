#include<stdio.h>

void find_pairs(int* a, int size, int x){
    int count=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i] + a[j] == x){
                count++;
                printf("\nindex :%d %d",i,j);
            }
        }
    }
    printf("\nNo. of pairs: %d",count);
}

int main(){
    //1D Array.

    int size;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    int a[size];
    printf("\nEnter the elements ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }

    int x;
    printf("Enter a value :");
    scanf("%d",&x);

    find_pairs(a, size, x);
return 0;
}