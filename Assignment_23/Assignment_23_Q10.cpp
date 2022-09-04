//10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
using namespace std;

int main()
{
    int a[10],i,sum=0;
    cout<<"Enter 10 Number=";
    for(i=0;i<10;i++)
    cin>>a[i];
    for(i=0;i<10;i++)
    sum=sum+a[i];
    cout<<"sum = "<<sum<<endl;
        return 0;
}
