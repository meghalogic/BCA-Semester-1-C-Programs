#include<stdio.h>
int main()
{
    int a;
    char b;
    printf("Enter value of a:");
    scanf("%d",&a);
    
    switch(a){
        case 20:
          printf("the value is 20\n");
          break;
        case 30:
          printf("the value is 30\n");
          break;
        default:
          printf("not matched\n");
        
    }
    printf("Enter value of b:");
    scanf(" %c",&b);
    switch(b){
        case 'a':
          printf("the value is a");
          break;
        case 'c':
          printf("the value is c");
          break;
        default:
          printf("not matched");
        
    }
}
