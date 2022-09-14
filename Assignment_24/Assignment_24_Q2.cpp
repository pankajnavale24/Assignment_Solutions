//2. Define a function to find the highest value digit in a given number.
int digit(int n);
#include<iostream>
using namespace std;
int main()
{
    int n,bigdigit;
    cout<<"Enter a number";
    cin>>n;
    bigdigit=digit(n);
    cout<<"highest digit is "<<bigdigit;

}
int digit(int n)
{
    int i,digit,big=0;
    for(i=0;n;i++)
    {
        digit=n%10;
        if(digit>big)
          big=digit;
         n=n/10;
    }
    return big;
}
