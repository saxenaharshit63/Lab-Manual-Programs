// WAP to Calculate Simple Interest

#include<stdio.h>
int main()
{
   float p,r,si,t;
   printf("enter the value of principle,rate,time");
   scanf("%f%f%f",&p,&r,&t);
   si=p*r*t/100;
   printf("simple intrest is %.2f",si);
   return 0;
}