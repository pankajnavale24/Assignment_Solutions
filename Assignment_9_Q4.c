/*Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include<stdio.h>
int main()
{
    int n,x,y,z;
    printf("Enter a choice ");
    printf("\n 1. Check whether a given set of three numbers are lengths of an isosceles triangle or not");
    printf("\n 2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not ");
    printf("\n 3. Check whether a given set of three numbers are equilateral triangle or not ");
    printf("\n 4. Exit\n");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("Input three sides of triangle: ");
        scanf("%d %d %d", &x, &y, &z);
        if(x==y || x==z || y==z)
             printf("This is an isosceles triangle.\n");
        else
             printf("This is not an isosceles triangle.\n");
             break;
    case 2:
        printf("Input three sides of triangle: ");
        scanf("%d %d %d", &x, &y, &z);
        if((x*x)+(y*y)==(z*z) || (x*x)+(z*z)==(y*y) || (y*y)+(z*z)==(x*x) )
		     printf("It is a right angle triangle!\n");
        else
		     printf("It is not a right angle triangle!\n");
		     break;
	case 3:
        printf("Input three sides of triangle: ");
        scanf("%d %d %d", &x, &y, &z);
        if (x == y && y == z)
             printf("Equilateral Triangle");
        else
             printf("not Equilateral Triangle");
        break;
    case 4:
        exit(0);


    }
}
