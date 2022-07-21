/*
    *
   * *
  *   *
 *     *
*********
*/
int main()
{
char k;
int i,j;
for(i=1;i<=5;i++)
{
k='*';
for(j=1;j<=9;j++)
{
if(j>=6-i && j<=4+i)
{
if(i==2&&j==5 || i==3&&(j==4||j==5||j==6) || i==4&&(j==3||j==4||j==5||j==6||j==7))
printf(" ");
else
printf("%c",k);

}
else
printf(" ");
}
printf("\n");
}
}

