// Write a C program to find the H.C.F. of two numbers

#include <stdio.h>
int main() {
    int num1, num2, i, hcf;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);
    for (i = 1; i <= num1 && i <= num2; ++i){
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }
    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);
    return 0;
}