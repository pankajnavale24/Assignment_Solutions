//Write a program which takes the day number of a week and displays a unique greeting message for the day.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter week number ");
    scanf("%u", &n);
    switch (n)
    {
    case 1:
        printf("Hi!");
        break;
    case 2:
        printf("Hello, sunshine!");
        break;
    case 3:
        printf("GOOOOOD MORNING, MUMBAI");
        break;
    case 4:
        printf("Good day to you.");
        break;
    case 5:
        printf("Wishing you the best for the day ahead.");
        break;
    case 6:
        printf("What a pleasant morning we are having.");
        break;
    case 7:
        printf("last day of the week");
        break;
        default:
        printf("\n Please enter Valid Number between 1 to 7");
    }
    return 0;
}
