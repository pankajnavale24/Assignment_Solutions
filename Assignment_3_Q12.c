// Write a program to check whether a given alphabet is in uppercase or lowercase.
#include<stdio.h>
int main()
{
    char a;
    printf(" Enter a Alphabet  ");
    scanf("%c",&a);
    if(a>=65 && a<=90)
        printf(" alphabet is in Uppercase");
    else if(a>=97 && a<=122)
        printf(" alphabet is in Lowercase");
}
