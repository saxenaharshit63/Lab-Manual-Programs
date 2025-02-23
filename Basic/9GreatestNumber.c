// WAP to input two numbers and find the greatest number using ternary operator

#include<stdio.h>
int main()
{
   int a,b,greatest;
   printf("enter two numbers");
   scanf("%d%d",&a,&b);
   greatest=(a>b)?a:b;
   printf("greatest No. is %d\n",greatest);
   return 0;
}