#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    i=1;
    do{
        printf("%d\n",a*i);
        i++;
    }
    while(i<=10);
    return 0;
}