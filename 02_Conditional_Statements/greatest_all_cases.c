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
    else if(a==b && a>c){
        printf("%d amd %d are equal and greater",a,b);
    }
     else if(b==c && b>a){
        printf("%d amd %d are equal and greater",b,c);
    }
     else if(a==c && a>b){
        printf("%d amd %d are equal and greater",a,c);
    }
     else if(a==b && a==c){
        printf("All are equal");
    }
    else {
        printf("%d is the grestest number",c);
    }
    return 0;
}