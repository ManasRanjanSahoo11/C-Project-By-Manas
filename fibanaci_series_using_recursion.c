#include <stdio.h>

int fiboSum(int x, int n) {
    if (n <= 0) {
        return n; // Sum of an empty series is 0
    }

    printf("%d ", x);

    return x + fiboSum(x + 1, n - 1);
}

int main() {
    int t;
    printf("Enter the number of terms you want to add in the Fibonacci series: ");
    scanf("%d", &t);

    if (t < 0) {
        printf("Number of terms should be non-negative.\n");
        return 1; 
    }

    printf("\nSum of Fibonacci series: %d\n", fiboSum(0, t));
    return 0;
}
