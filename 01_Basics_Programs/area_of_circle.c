#include<stdio.h>
int main()
{
    float r,area,pie;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    pie=3.14;
    area=pie*r*r;
    printf("Area of the circle is %f",area);
    return 0;
}