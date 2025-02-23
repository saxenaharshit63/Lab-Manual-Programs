// WAP to enter a number from user, check that number is Armstrong or not

#include<stdio.h>
#include<math.h>
int main() {
    int num,Armstrong;
    while (1) {
        printf("Enter a number (negative number to exit): ");
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        if (isArmstrong(num)) {
            printf("%d is an Armstrong number.\n", num);
        } else {
            printf("%d is not an Armstrong number.\n", num);
        }
    }
    printf("Exiting program...\n");
    return 0;
}