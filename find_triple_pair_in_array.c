#include<stdio.h>
int main(){
    int size;
    printf("Enter the size :");
    scanf("%d",&size);

    int a[size];

    printf("\nEnter the array :");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);

    int x;
    printf("Enter target value :");
    scanf("%d",&x);

    int count=0;

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++)
            {
                if(a[i] + a[j] + a[k] == x){
                count++;
                printf("\nindex= %d %d %d",i,j,k);
                }
            }
        }
    }
    printf("\nNo. of pairs : %d",count);

    return 0;
}