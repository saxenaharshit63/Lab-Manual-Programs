/* WAP to receive a five-digit no and display as like
24689:
2
4
6
8
9 */

#include <stdio.h>
int main() {
    int num, digit;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999) {
        printf("Please enter a valid five-digit number.\n");
        return 1;  
    }
    while (num > 0) {
        digit = num % 10;    
        printf("%d\n", digit);  
        num = num / 10;      
    }
    return 0;
}