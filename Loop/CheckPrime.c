// WAP to enter a number from user than check that number is prime or not

#include<stdio.h>
int main()
{
    int num,i,prime=1;
    printf("please enter a number");
    scanf("%d",&num);
    if(num<=1)
    {
       prime=0;
    }
    else
    {
        for(i=2;i*i<=num;i++)
        {
           if(num%1==0)
           {
             prime=0;
             break;
           }
        }
    }
    if(prime)
    {
      printf("%d is a prime number \n",num);
    }
    else
    {
      printf("%d is not a prime number \n",num);
    }
    return 0;
}