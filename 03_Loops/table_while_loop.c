#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a number:");
    scanf("%d",&a);
    i=1;
    while(i<=10){
        printf("%d\n",a*i);
        i++;
    }
    return 0;
}