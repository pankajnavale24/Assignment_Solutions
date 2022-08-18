//Write a program in C to count the total number of alphabets, digits and special characters in a string.
//Assignment 17 Q7
#include <stdio.h>
int main()
{
char str[1000];
int i=0,j=0,k=0,l=0;
printf("Enter a string");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
j++;
else if(str[i]>='0' && str[i]<='9')
k++;
else
l++;
}
printf("\ntotal number of digits %d ",k);
printf("\ntotal number of alphabets %d",j);
printf("\ntotal number of special characters %d",l);
return 0;
}
