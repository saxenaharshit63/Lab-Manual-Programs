// WAP to Calculate Compound Interest

#include<stdio.h>
#include<math.h>
int main()
{
    float pr,r,amt,ci;
    int t;
    printf("enter the principle ammount");
    scanf("%f",&pr);
    printf("enter the rate of intrest");
    scanf("%f",&r);
    printf("enter the time");
    scanf("%d",&t);
    amt=pr*pow((1+r/100),t);
    printf("ammount is %f",amt);
    ci=amt-pr;
    printf("ci is %f",ci);
    return 0;
}
