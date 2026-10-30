#include<stdio.h>
int main()
{
    float p,r,t,interest;
    printf("Enter Principal:");
    scanf("%f",&p);
    printf("Enter Rate:");
    scanf("%f",&r);
    printf("Enter Time:");
    scanf("%f",&t);
    interest=(p*r*t)/100;
    printf("Simple Interest is %f",interest);
    return 0;

}