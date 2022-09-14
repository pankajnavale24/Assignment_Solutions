//6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    cout<<"\nbefore swaping "<<"a="<<a<<" b="<<b;
    swap(a,b);
    cout<<"\nafter swaping "<<"a="<<a<<" b="<<b;
    return 0;
}
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
