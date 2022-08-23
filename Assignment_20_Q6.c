// 6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int main()
{
  char a[]="pankaj";
    length(a);

}
void length(char *ptr)
{
    int i;
    for(i=1;ptr[i];i++);
    printf("lenth of string is %d",i);
}
