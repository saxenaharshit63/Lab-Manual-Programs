// WAP to find sum of Fibonacci series up to N (where N is entered through keyboard) using function

#include <stdio.h>
int fibonacciSum(int n) {
    int a = 0, b = 1, sum = 0;
    if (n >= 1) {
        sum += a;  
    }
    for (int i = 2; i <= n; i++) {
        sum += b;
        int nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    return sum;
}
int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
     }
    int sum = fibonacciSum(n);
    printf("The sum of the first %d Fibonacci numbers is: %d\n", n, sum);
    return 0;
}