// Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
 {
    int y, n;
    printf("Enter the year\n");
    scanf("%d", &y);
    n= y % 400 == 0 || y % 100 == 0 || y % 4 == 0;
    switch (n)
    {
        case 1:
            printf("leap year.\n", y);
            break;
        case 0:
            printf("not leap year.\n", y);
            break;
        default:
            printf("not leap year.\n", y);
    }
}
