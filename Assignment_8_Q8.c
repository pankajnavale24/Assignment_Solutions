/*
      1
     121
    12321
   1234321
*/
int main()
{
int a;
int i,j;
for(i=1;i<=4;i++)
{
a=1;
for(j=1;j<=7;j++)
{
if(j>=5-i&&j<=3+i)
{
printf("%d",a);
if(j<4)
a++;
else
a--;
}
else
printf(" ");
}
printf("\n");
}
}
