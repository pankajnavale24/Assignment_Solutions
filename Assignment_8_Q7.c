/*
**********
****  ****
***    ***
**      **
*        *

*/
#include<stdio.h>
int main()
{
char a='*';
int i,j;
for(i=1;i<=5;i++)
{
for(j=0;j<=10;j++)
{
if( j>=6-i && j<=4+i )
printf(" ");
else
printf("%c",a);

}
printf("\n");
}
}
