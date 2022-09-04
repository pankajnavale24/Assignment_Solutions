//8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"swaped a="<<a<<endl<<"swaped b="<<b<<endl;
        return 0;
}
