#include<stdio.h>
int main()
{
    int a,b,i;   
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=1;i<11;i++){
        b=a*i;
        printf("%d X %d = %d\n",a,i,b);
    }
    return 0;
}