/*
          A
         ABA
        ABCBA
       ABCDCBA
      ABCDEDCBA
      */
int main()
{
char k;
int i,j;
for(i=1;i<=5;i++)
{
k='A';
for(j=1;j<=9;j++)
{
if(j>=6-i && j<=4+i)
{
printf("%c",k);
j<5 ? k++ :k--;
}
else
printf(" ");
}
printf("\n");
}
}
