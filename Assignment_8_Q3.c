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
if(i<6-j)
printf("%c",a);
else
printf(" ");
}
printf("\n");
}
}
