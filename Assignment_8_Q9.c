/*
1234321
 12321
  121
   1
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
if(j>=i&&j<=8-i)
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

