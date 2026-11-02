#include<stdio.h>
int even_odd(int a);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    even_odd(num);
    return 0;
}
int even_odd(int a){
    if(a%2==0){
        printf("It is Even");
    }
    else{
        printf("It is odd");
    }
    return 0;
}