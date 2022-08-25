/*1. Write a program to find the number of vowels in each of the 5 strings stored in two dimensional arrays, taken from the user.*/
#include<stdio.h>
int main()
{

    char str[5][20];
    int i,j,a = 0,b=0,c=0,d=0,e=0;
    printf("Enter 5 strings");
    for(j=0;j<5;j++)
    {
       printf("\nEnter string no. %d: ",j+1);
       scanf(" %s",str[j]);
       for(i = 0; str[j][i] ; i++)
            {
        if( str[j][i] == 'a' ||str[j][i] == 'e' ||str[j][i] == 'i' ||
            str[j][i] == 'o' ||str[j][i] == 'u' ||str[j][i] == 'A' ||
            str[j][i] == 'E' ||str[j][i] == 'I' ||str[j][i] == 'O' ||
            str[j][i] == 'U'   )
            if(j==0)
            a++;
            else if (j==1)
            b++;
            else if(j==2)
            c++;
            else if(j==3)
            d++;
            else if(j==4)
            e++;
          }
           if(j==0)
            printf("vowel count = %d\n",a);
            else if (j==1)
           printf("vowel count = %d\n",b);
            else if(j==2)
            printf("vowel count = %d\n",c);
            else if(j==3)
            printf("vowel count = %d\n",d);
            else if(j==4)
           printf("vowel count = %d\n",e);
          }


    return 0;
}
