//Write a program to count vowels in a given string
//Assignment 17 Q3
#include <stdio.h>
int main()
{
char str[1000],a='a',A='A',e='e',E='E',k='i',K='I',o='o',O='O',u='u',U='U';
int i,Count=0;
printf("Enter a string=");
gets(str);
for(i=0;str[i];i++)
{
if(str[i]==a || str[i]==e ||str[i]==k || str[i]==o || str[i]==u||
str[i]==A || str[i]==E ||str[i]==K || str[i]==O || str[i]==U )
Count++;
}
printf("%d vowel in string",Count);
}
