//Write a program to reverse a string.
//Assignment 17 Q6
#include <stdio.h>
int main()
{
char str[1000];
int i=0,j,temp;
printf("Enter a string");
gets(str);
for(i=0;str[i];i++);
j=i;;
for(i=0;i<j/2;i++)
{
temp=str[i];
str[i]=str[j-i-1];
str[j-i-1]=temp;
}
printf("%s",str);
return 0;
}
