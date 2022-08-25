/*6. Write a function to check whether a given string is an alphanumeric string or not.
(Alphanumeric string must contain at least one alphabet and one digit)*/
#include <stdio.h>
int main()
{
char str[100];
int i=0;
    printf("Enter a string");
      gets(str);
      for(i=0;str[i];i++)
     {
          if((str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z' && str[i]>='0' && str[i]<='9'))
              {
              printf("This string is alpanumeric");break;
              }
          else
              {
              printf("This string is not alpanumeric"); break;
              }
       }
}
