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
for(j=1;j<=5;j++)
{
if(j<=5 && j>=6-i)
{{if(i==3&&j==4 || i==4&&j==3 ||i==4&&j==4)
printf(" ");
else
printf("%c",k);}}
else
{
printf(" ");
}
}
printf("\n");
}
}
