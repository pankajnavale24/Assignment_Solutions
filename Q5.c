//WAP to calculate the length of String using printf function.
#include<stdio.h>
int main()
{
    char string[50];
    int i,length=0;
    printf("enter a string\n");
    fgets(string,50,stdin);
    for(i=1;string[i];i++)
        length++;
    printf("length of string is %d",length);
}
/*#include<Stdio.h>
int main()
{
int x = printf(“Pankaj”);
printf(“%d”,x);
return 0;
}
*/
