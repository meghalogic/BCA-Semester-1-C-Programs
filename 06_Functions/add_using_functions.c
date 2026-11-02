#include<stdio.h>
int add(int a,int b){
    printf("The addition is %d",a+b);
    return 0;
}
int main(){
    int num1,num2;
    printf("Enter the numbers: ");
    scanf("%d%d",&num1,&num2);
    add(num1,num2);
    return 0;
}