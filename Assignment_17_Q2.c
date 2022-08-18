//Write a program to count the occurrence of a given character in a given string.
//Assignment 17 Q2
#include <stdio.h>
int main()
{
char str[1000],c;
int i,Count=0;
printf("Enter a string=");
gets(str);
printf("Enter a character whose appearance is to be searched=");
c=getchar();
for(i=0;str[i];i++)
{
if(str[i]==c)
Count++;
}
printf("character '%c' appears %d times in string",c,Count);
}
