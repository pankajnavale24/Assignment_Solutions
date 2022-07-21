/*
*
**
* *
*  *
*****
*/
int main()
{
char k;
int i,j;
for(i=1;i<=5;i++)
{
k='*';
for(j=1;j<=i;j++)
{
if((i==3 && j==2) || (i==4 && j==2)||(i==4&&j==3))
{
printf(" ");
}
else
printf("%c",k);
}
printf("\n");
}
}
