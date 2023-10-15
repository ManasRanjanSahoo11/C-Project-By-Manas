#include<stdio.h>
void main(){
    int f,s,x,i;
    printf("Enter two number ");
    scanf("%d%d",&f,&s);

    for ( x = f+1; x <= s-1; x++)
    {
        for ( i = 2; i < x; i++)
        {
            if(x%i == 0)
            break;
        }
        if(i==x)
        printf("%d\n",x);
        
    }
    
}