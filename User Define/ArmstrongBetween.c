// WAP to print out all the Armstrong number between 100 and 500 using user define function

#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int sum = 0, temp, remainder, digits = 0;
    temp = num;
    while (temp != 0) {
        temp=temp/ 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (sum == num);
}
int main() {
    printf("Armstrong numbers between 100 and 500 are:\n");
    for (int i = 100; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}