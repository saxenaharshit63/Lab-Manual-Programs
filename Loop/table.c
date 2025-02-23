// WAP to print a multiplication table of n number in reverse order

#include<stdio.h>
int main()
{
   int n,i;
   printf("please enter a number");
   scanf("%d",&n);
   printf("multiplication table of %d in reverse order:\n",n);
   for(i=10;i>=1;i--)
   {
       printf("%d%d=%d \n",n,i,n*i);
   }
   return 0;
}