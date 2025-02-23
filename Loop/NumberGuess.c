// Number Guessing Game, Find the lower and higher number

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int number,guess,attempts=0;
    srand(time(0));
    number=rand()%100+1;
    printf("i have picked a number guessing game !\n");
    printf("i have picked a number b|w 1 and 100.can you guess it? \n");
    do{
         printf("Enter your guess");
         scanf("%d",&guess);
         attempts++;
         if(guess>number)
         {
            printf("Lower number please!\n");
         }
         else if(guess<number)
         {
            printf("Higher number please!\n");
         }
         else
         {
       printf("congratulations ! you guessed the correct number in %d attempts.\n",attempts);
         }
         }while(guess!=number);
         return 0;
}