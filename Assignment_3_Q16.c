// Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    if(a>='A' && a<='Z')
        printf("character is Uppercase");
    else if (a>='a'&&a<='z')
         printf("character is Lowercase");
    else if (a>='0'&& a<='9')
        printf("character digit");
    else
        printf("Special character");
}
