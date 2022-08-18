//Assignment 17 Q5
//Write a program to convert a given string into lowercase
#include <stdio.h>
int main()
{
char str[1000];
int i=0;
printf("Enter a string");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]>='A' && str[i]<='Z')
str[i]=str[i]+32;
printf("%c",str[i]);
}
return 0;
}
