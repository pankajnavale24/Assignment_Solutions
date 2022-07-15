//WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.
#include<stdio.h>
int main()
{
    float r, Area;
    printf("enter value of radius");
    scanf("%f",&r);
    Area=3.14*r*r;
    printf("Area of Circle=%f",Area);
}
