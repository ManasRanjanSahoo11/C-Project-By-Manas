#include<stdio.h>

void main(){
    int r1, c1, r2, c2, i, j, k;
    
    printf("\nEnter the row for 1st matrix :");
    scanf("%d", &r1);
    
    printf("\nEnter the column for 1st matrix :");
    scanf("%d", &c1);

    printf("\nEnter the row for 2nd matrix :");  
    scanf("%d", &r2);

    printf("\nEnter the column for 2nd matrix :");  
    scanf("%d", &c2);

    int a[r1][c1], b[r2][c2], res[r1][c2];

    if(c1 == r2){
        printf("\nEnter the Elements of 1st matrix :");
        for(i = 0; i < r1; i++){
            for(j = 0; j < c1; j++){
                scanf("%d", &a[i][j]);
            }
        }

        printf("\nEnter the Elements of 2nd matrix :");
        for(i = 0; i < r2; i++){ 
            for(j = 0; j < c2; j++){  
                scanf("%d", &b[i][j]);
            }
        }

        printf("\nElements of 1st matrix :\n");
        for(i = 0; i < r1; i++){ 
            for(j = 0; j < c1; j++){  
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        printf("Elements of 2nd matrix :\n");
        for(i = 0; i < r2; i++){ 
            for(j = 0; j < c2; j++){  
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }

        // Initialize result matrix elements to zero
        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                res[i][j] = 0;
            }
        }

        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                for(k = 0; k < c1; k++){
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        printf("Result :\n");

        for(i = 0; i < r1; i++){
            for(j = 0; j < c2; j++){
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Multiplication not possible !");
    }
}
