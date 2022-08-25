/*
8. Write a function to count words in a given string
*/
#include<stdio.h>
int main()
{
    char s[100]="my name is Khan";
    words(s);

}
void words(char s[])
{
    int c=1,i;
    for(i=0;s[i];i++)
    {
        if(s[i] ==' ' && s[i+1!=' '])
        c++;

    }
    printf("total words in string=%d",c);
}
