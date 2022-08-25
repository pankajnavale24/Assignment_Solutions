/*1. Write a function to calculate length of the string*/
#include <stdio.h>
int main()
{
char str[100];
printf("Enter a string");
gets(str);
length(str);
}
void length(char s[])
{
     int j;
     for (j=0;s[j];j++);
     printf("length of string is %d",j);
}
