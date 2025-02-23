// Write a C program to print Fibonacci series

#include<stdio.h>
int main()
{
    int n,i;
    double long first=0,second=1,next;
    printf("enter the number of terms in the fibonacci series");
    scanf("%d",&n);
    printf("*****Fibonacci Series*****");
    for(i=0;i<=n;i++)
    {
      if(i<=1)
      {
        next=i;
      }
      else{
            next=first+second;
            first=second;
            second=next;
      }
      printf("ld",next);
    }
    printf("\n");
    return 0;
}