//Write a program in C to Find the Frequency of Characters.
//Assignment 17 Q10
#include <stdio.h>
int main()
{
  char str[100],temp;
  int i,j,l;
  printf("Enter  a string: ");
  gets(str);
  printf("Enter a Character");
  scanf("%c",&temp);
  for(i=0;str[i];i++)
  {
   if(str[i]==temp)
   j++;
  }
  printf(" '%c' appears %d times",temp,j);
}
