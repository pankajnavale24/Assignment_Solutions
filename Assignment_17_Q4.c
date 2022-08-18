//Write a program to convert a given string into uppercase
//Assignment 17 Q4
#include <stdio.h>
int main()
{
char str[1000];
int i=0;
printf("Enter a string");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]>='a' && str[i]<='z')
str[i]=str[i]-32;
printf("%c",str[i]);
}
return 0;
}
