/*7. Write a function to check whether a given string is palindrome or not. nitin,madam,race car,malayalam,nayan,*/
#include<stdio.h>
int main()
{
    char a[100];
    int i, l,flag = 0;
    printf("Enter a string:");
    scanf("%s",a);
    l= strlen(a);
    for(i=0;i < l ;i++)
        {
        if(a[i] != a[l-i-1])
            {
            flag = 1;
            break;
            }
        }

    if (flag)
        {
        printf("not palindrome");
        }
    else
    {
        printf("palindrome");
    }
    return 0;
}
