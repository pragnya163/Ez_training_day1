#include <stdio.h>

// Function to calculate the sum of digits
int sumOfDigits(int number) {
    int digitSum = 0;

    while (number > 0) {
        // Extract the last digit
        int digit = number % 10;

        // Add the digit to the sum
        digitSum += digit;

        // Remove the last digit from the number
        number /= 10;
    }

    return digitSum;
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = sumOfDigits(number);
    
    printf("The sum of digits in %d is %d\n", number, result);
    
    return 0;
}
