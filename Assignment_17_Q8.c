//Write a program in C to copy one string to another string.
//Assignment 17 Q8
#include <stdio.h>
int main()
{
char str1[1000],str2[1000];
int i;
printf("Enter a string");
gets(str1);
for(i=0;str1[i];i++)
str2[i]=str1[i];
str2[i] = '\0';
printf("\nEntered string= %s",str1);
printf("\nCopied string= %s",str2);
printf("\nno of characters copied=%d",i);
return 0;
}
