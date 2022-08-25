/* 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
the user*/
#include<stdio.h>
int main()
{
    int i,j,n=10;
    char name[10][8], tname[10][8], temp[8];
    printf("Enter 10 city names\n");
    for (i = 0; i < 10; i++)
        {
            scanf("%s", name[i]);
            strcpy(tname[i], name[i]);
        }
    for (i = 0; i < n - 1 ; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (strcmp(name[i], name[j]) > 0)
                {
                    strcpy(temp, name[i]);
                    strcpy(name[i], name[j]);
                    strcpy(name[j], temp);
                }
            }
        }
        for (i=0;i<n;i++)
        {
            printf("%s  \n",name[i]);
        }


}
