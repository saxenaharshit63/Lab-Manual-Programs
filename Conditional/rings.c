/* Write a program that estimated the price of rings for an
online shop that sells rings with custom engravings. The
online shop has the following price structure:
Gold plated rings have a base cost of Rs. 500, and you
charge 70.30 per engraved unit.
Solid gold rings have a base cost of Rs. 1000, and you
charge 10.40 per engraved unit.
Silver plated rings have a base cost of Rs. 300, and you
charge 5.10 per engraved unit.
Find the total cost as per the ring purchase by customer */

#include<stdio.h>
int main()
{
  int ring,engravings;
  float cost;
  printf("select the type of ring \n");
  printf("1.Gold Plated Ring \n");
  printf("2.Solid gold ring");
  printf("3.silver plated ring");
  printf("enter your choice 1-3");
  scanf("%d",&ring);
  printf("enter the number of engravings");
  scanf("%d",&engravings);
  switch(ring)
  {
     case 1:
      cost=500+(70.30*engravings);
      break;
      case 2:
        cost=1000+(10.40*engravings);
        break;
        case 3:
          cost=300+(5.10*engravings);
          break;
          default :
           printf("invalid choice ! \n");
           return 1;
  }
  printf("the total cost of the ring is rs.%.2f\n",cost);
  return 0;
}