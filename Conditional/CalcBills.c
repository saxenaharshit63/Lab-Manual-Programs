/* WAP to calculate the monthly telephone bills as per the following rule
● Minimum Rs. 100 for up to 50 calls
● Plus Rs. 0.80 per call for next 50
calls
● Plus Rs. 0.60 per call for next 100
calls
● Plus Rs. 0.40 per call for any call
beyond 200 calls */

#include<stdio.h>
int main()
{
   int calls;
   float bills;
   printf("enter the number of calls");
   scanf("%d",&calls);
   if(calls<=50)
   {
     bills=100.0;
   }
   else if(calls<=100)
   {
     bills=100.0+(calls-50)*80;
   }
   else if(calls<=200)
   {
     bills=100.0+50*80+(calls-100)*60;
   }
   else
   {
      bills=100.0+50*0.80+100*0.6+(calls-200)*0.40;
   }
   printf("the total monthly telephone bills is %d,rs.%.2f\n",bills);
   return 0;
}