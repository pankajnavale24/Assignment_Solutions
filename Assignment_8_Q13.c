/*
ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/
int main()
{
char k;
int i,j;
for (i=0;i<=7;i++)
{
    k='A';
    for(j=1;j<=13;j++)
{
     if(j>=8-i && j<=6+i)
     printf(" ");
     else
     printf("%c",k);
     j<7 ?k++ :k--;

}
printf("\n");
}
}
