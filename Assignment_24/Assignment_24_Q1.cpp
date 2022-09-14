//1. Define a function to check whether a given number is a Prime number or not.
bool isPrime(int n);
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(isPrime(n))
        cout<<"Prime";
    else
        cout<<"Non Prime";
    return 0;
}
bool isPrime(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    return 1;
}
