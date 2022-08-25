/* 9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed
*/
#include<stdio.h>
int main()
{
    int i,flag=0;
    char a[3][2][20] = {{"Pankaj","24"},{"Pooja","25"},{"Prachi","26"}};
    char Username[]="Pankaj";
    char Password[]="24";
    for(i=0 ; i<3 ; i++)
    {
        if( strcmp(Username,a[i][0])==0 && strcmp(Password,a[i][1])==0 )
        {
            printf("Login Succesfull!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
            flag=1;
        }
    }
    if(flag==0)
        printf("Username or Passwords Not Matched");
        return 0;
}
