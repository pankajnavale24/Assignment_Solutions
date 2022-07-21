/*
*****
 ****
  ***
   **
    *
*/
#include<stdio.h>
int main()
{
char a='*';
int i,j;
for(i=0;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
printf(" ");
else
printf("%c",a);
}
printf("\n");
}
}
