#include <stdio.h>

int main() {
    int lowerLimit, upperLimit;

    printf("Enter the lower limit: ");
    scanf("%d", &lowerLimit);

    printf("Enter the upper limit: ");
    scanf("%d", &upperLimit);

    printf("Armstrong numbers in the range %d to %d are:\n", lowerLimit, upperLimit);

    for (int number = lowerLimit; number <= upperLimit; number++) {
        int originalNumber = number;
        int numDigits = 0;
        int sum = 0;

        // Count the number of digits
        int temp = number;
        while (temp > 0) {
            temp /= 10;
            numDigits++;
        }

        // Calculate the sum of digits raised to the power of the number of digits
        temp = number;
        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;

            for (int i = 0; i < numDigits; i++) {
                power *= digit;
            }
            
            sum += power;
            temp /= 10;
        }

        if (sum == number) {
            printf("%d\n", number);
        }
    }

    return 0;
}
