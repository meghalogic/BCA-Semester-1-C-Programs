#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number a,b,c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("%d is the greatest number",a);
     }
    else if(b>a && b>c){
        printf("%d is the greatest number",b);
    }
    else {
        printf("%d is the grestest number",c);
    }
    return 0;
}