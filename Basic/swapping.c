// WAP to swap two numbers using third variable, without using third variable, within single statement using comma operator

/*
#include<stdio.h>
int main()
{
   int a,b,temp;
   printf("enter the two number");
   scanf("%d%d",&a,&b);
   printf("before swapping a is %d,b is %d",a,b);
   temp=a,a=b,b=temp;
   printf("After swapping a is %d,b is %d",a,b);
   printf("a is %d",a);
   printf("b is %d",b);
   return 0;
}
*/

#include<stdio.h>
int main()
{
   int a,b;
   printf("enter the two number");
   scanf("%d%d",&a,&b);
   printf("before swapping a is %d,b is %d",a,b);
   a=(a+b)-(b=a);
   printf("After swapping a is %d,b is %d",a,b);
   return 0;
}
