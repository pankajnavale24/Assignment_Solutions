//5. Define a function to check whether a given number is a term in a Fibonacci series or not.
int checkfibonacci(int n);
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    if(checkfibonacci(n))
    {
        cout<<"Fibonacci";
    }
    else
    {
        cout<<"not Fibonacci";
    }
}
int checkfibonacci(int n)
        {
            int a = 0;
            int b = 1;
            if (n==a || n==b)
                return 1;
            int c = a+b;
            while(c<=n)
            {
                if(c == n)
                return 1;
                a = b;
                b = c;
                c = a + b;
            }
            return 0;
        }
