// WAP to input the annual taxable income and compute the tax according to the given condition

#include<stdio.h>
int main()
{
   float income,tax=0;
   printf("enter your anual taxable income");
   scanf("%f",&income);
   if(income<=100000)
   {
     tax=0;
   }
   else if(income<=150000)
   {
     tax=(income-100000)*0.10;
   }
   else if(income<=250000)
   {
     tax=5000+(income-1500000)*0.20;
   }
   else{
         tax=250000+(income-250000)*0.30;
   }
   printf("the total tax to be paid is rs.%.2f\n",tax);
   return 0;
}