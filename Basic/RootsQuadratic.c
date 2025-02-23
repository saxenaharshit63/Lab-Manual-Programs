// WAP to determine the roots of quadratic equation

#include<stdio.h>
int main()
{
    float a,b,c;
    float dis,r1,r2;
    printf("enter cofficients a,b and c");
    scanf("%f%f%f",&a,&b,&c);
    dis=b*b-4*a*c;
    r1=(-b+sqrt(fabs(dis)))/(2*a);
    r2=(-b-sqrt(fabs(dis)))/(2*a);
    printf("r1=%.2f\n",r1);
    printf("r2=%.2f\n",r2);
    printf("dis=%.2f\n",dis);
    printf("roots are sqrt\n",(dis)>=0" ":"not");
    return 0;
}
