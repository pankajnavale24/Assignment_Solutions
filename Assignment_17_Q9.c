//Write a C program to sort a string array in ascending order.
//Assignment 17 Q9
#include <stdio.h>
int main()
{
  char str[100],temp;
  int i,j,l;
  printf("Enter  a string: ");
  gets(str);
  l=strlen(str);
  for(i=1;i<l;i++)
  {
     for(j=0;j<l-i;j++)
     {
        if(str[j]>str[j+1])
	       {
	       temp=str[j];
	       str[j] = str[j+1];
	       str[j+1]=temp;
 	       }

     }

  }
   printf("After sorting the string\n");
   printf("%s\n",str);
  }
