// Given an integer n, calculate the square of a number without using *, / and pow()

#include<stdio.h>
int main() {
    int n, i, square = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        square =square+n;
    }
    printf("The square of %d is: %d\n", n, square);
    return 0;
}