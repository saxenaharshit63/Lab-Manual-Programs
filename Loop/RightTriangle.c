// Right Triangle Star Pattern

#include<stdio.h>
int main()
{
   int i,j,k,n;
   printf("enter the number");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     for(j=1;j<=i;j++)
     {
       printf("");
     }
     for(k=1;k<=i;k++){
       printf("*");
     }
     printf("\n");
   }
   return 0;
}