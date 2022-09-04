//9. Write a C++ program to find the maximum of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter 1st Number=";
    cin>>a;
    cout<<"Enter 2nd Number=";
    cin>>b;
    if(a>b)
    cout<<a<<" is maximum"<<endl;
    else
    cout<<"maximum is "<<b<<endl;
        return 0;
}
