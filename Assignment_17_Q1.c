//Assignment 17 Q1
//Write a program to calculate the length of the string. (without using built-in method)
#include <stdio.h>
int main()
{ int i;
char str[100];
printf("Enter a string");
gets(str);
for(i=0;str[i];i++);
printf("length of string is %d",i);
}
