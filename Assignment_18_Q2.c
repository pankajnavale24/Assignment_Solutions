/*2. Write a function to reverse a string.*/
#include <stdio.h>
void reverse(char str[]);
int main()
{
char str[1000];
printf("Enter a string");
gets(str);
void reverse(str);
printf("reverse string = %s",str);
}
void reverse(char s[])
{
int i=0,j,temp;
for(i=0;s[i];i++);
j=i;
for(i=0;i<j/2;i++)
{
temp=s[i];
s[i]=s[j-i-1];
s[j-i-1]=temp;
}

}
