// WAP to enter a number from user than reverse that number

#include<stdio.h>
int main()
{
    int num,renum,remainder;
    printf("enter an number");
    scanf("%d",num);
    for(;num!=0;num/=10)
    {
       remainder=num%10;
       renum=renum*10+remainder;
    }
    printf("renum=%d\n",renum);
    return 0;
}