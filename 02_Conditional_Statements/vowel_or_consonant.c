#include<stdio.h>
int main()
{
    char c;
    printf("Enter the char: ");
    scanf("%c",&c);
    if(c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u'||
       c=='A'|| c=='E'|| c=='I'|| c=='O'|| c=='U'){
        printf("%c  is a vowel",c);
    }
    else if (c>='a'&& c<='z'|| c>='A' && c<='Z'){
        printf("%c is a consonant",c);
    }
    else{
        printf("%c is not a english character",c);
    }
    return 0;
}