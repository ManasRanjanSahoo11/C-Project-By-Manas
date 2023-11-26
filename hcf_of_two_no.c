#include<stdio.h>
void main(){
    int x,y,h;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    for(h=x<y?x:y;h>=1;h--){
        if(x%h==0&&y%h==0)
        break;
    }
    printf("HCF = %d",h);
}