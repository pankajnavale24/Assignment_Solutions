/*
*
**
***
****
*****
*/
#include<stdio.h>
int main()
{
char k;
k='*';
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=5;j++)
{
if(j<=i)
printf("%c",k);
}
printf("\n");
}
}

