/*
*********
 *******
  *****
   ***
    *
*/
#include<stdio.h>
int main()
{
char a='*';
int i,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=9;j++)
{
if( j>=i && j<=10-i )
printf("%c",a);
else
printf(" ");

}
printf("\n");
}
}
