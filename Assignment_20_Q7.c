//7. Write a program to count the number of vowels and consonants in a string using a
//pointer.
#include<stdio.h>
int main()
{
    int i,j;
    char a[]="BeginnersBook";
    for(i=0;a[i];i++);
    k(a,i);

}
void k(char *ptr,int j)
{
    int p=0,count=0;
    for(p=0;ptr[p];p++)
    {
        if(ptr[p]=='a'||ptr[p]=='e'||ptr[p]=='i' ||ptr[p]=='o' ||ptr[p]=='u'|| ptr[p]=='A'||ptr[p]=='E'||ptr[p]=='I' ||ptr[p]=='O' ||ptr[p]=='U')
        count++;
    }
    printf("no of vowels is %d\n",count);
    printf("no of consonants is %d",j-count);
}
