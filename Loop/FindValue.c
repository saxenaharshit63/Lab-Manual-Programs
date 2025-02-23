// WAP to find out the value of x raised to the power y, where x and y are positive integers

#include <stdio.h>
int main() {
    int x, y,i;
    long long result = 1;  
    printf("Enter a positive integer for x (base): ");
    scanf("%d", &x);
    printf("Enter a positive integer for y (exponent): ");
    scanf("%d", &y);
    if (x <= 0 || y < 0) {
        printf("Both x and y must be positive integers.\n");
        return 1;  
    }
    for (i = 1; i <= y; i++) {
        result *= x; 
}
    printf("%d raised to the power %d is: %lld\n", x, y, result);
    return 0;
}