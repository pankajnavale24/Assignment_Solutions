/*
ABCDCBA
 ABCBA
  ABA
   A
*/
int main()
{
char k;
int i,j;
for(i=1;i<=4;i++)
{
k='A';
for(j=1;j<=7;j++)
{
if(j>=i && j<=8-i)
{
printf("%c",k);
j<4 ? k++ :k--;
}
else
printf(" ");
}
printf("\n");
}
}
