/*
5. Suppose we have a list of email addresses, check whether all email addresses have
‘@’ in it. Print the odd email out.
*/
#include<stdio.h>
int main()
{
    char a [10][30];
    int i,j;
    for(i=1;i<10;i++)
    {
        gets(a[i]);
    }
    for(i=1;i<10;i++)
    {
        if(strchr(a[i],'@')==0)
            printf("odd main addresses = %s\n",a[i]);
    }

}
