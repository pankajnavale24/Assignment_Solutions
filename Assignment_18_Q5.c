/*5. Write a function to transform a string into lowercase*/
#include <stdio.h>
int compare(char[]);
int main()
{
   char str[20];
   printf("Enter the first string : ");
   gets(str);
   printf("\nLowercase string :");
   LOWERCASE(str);

}
int LOWERCASE(char a[])
{
    int i;
    for(i=0;a[i];i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
      printf("%s",a);

}
