// WAP to find the sum of digits of a 5 digit number using recursion

#include <stdio.h>
int sumOfDigits(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + sumOfDigits(num / 10);
}
int main() {
    int number;
    printf("Enter a 5-digit number: ");
    scanf("%d", &number);
    if (number < 10000 || number > 99999) {
        printf("Please enter a valid 5-digit number.\n");
        return 1;
    }
    int sum = sumOfDigits(number);
    printf("The sum of the digits of %d is: %d\n", number, sum);

    return 0;
} 