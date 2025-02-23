// WAP to convert Fahrenheit to Celsius and Celsius to Fahrenheit

#include<stdio.h>

int main() 
{
    int choice;
    float temp, convertedTemp;

    printf("Temperature Conversion Program:\n");
    printf("Enter 1 for Fahrenheit to Celsius\n");
    printf("Enter 2 Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter temperature value: ");
    scanf("%f", &temp);

    switch(choice) 
    {
        case 1:
            convertedTemp = (temp - 32) * 5 / 9;
            printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temp, convertedTemp);
            break;
        case 2:
            convertedTemp = (temp * 9 / 5) + 32;
            printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temp, convertedTemp);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
