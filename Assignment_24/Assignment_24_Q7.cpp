//7. Write a function using the default argument that is able to add 2 or 3 numbers.
int add(int a,int b=0,int c=0);
#include<iostream>
using namespace std;
int main()
{
    cout<<"sum="<<add(10)<<endl;
    cout<<"sum="<<add(10,20)<<endl;
    cout<<"sum="<<add(10,20,30)<<endl;
    return 0;
}
int add(int a,int b,int c)
{
    return (a+b+c);
}
