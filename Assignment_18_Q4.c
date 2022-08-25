/*4. Write a function to transform string into uppercase*/
#include <stdio.h>
int compare(char[]);
int main()
{
   char str[20];
   printf("Enter the first string : ");
   gets(str);
   printf("\nUppercase string :");
   UPPERCASE(str);

}
int UPPERCASE(char a[])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;

        }
    }
printf("%s",a);
}
