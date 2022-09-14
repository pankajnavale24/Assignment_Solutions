//9. Write functions using function overloading to find a maximum of two numbers and
//   both the numbers can be integer or real.
int max(float a, float b);
int max(int a,int b);
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n maximum no is "<<max(1,2);
    cout<<"\n maximum no is "<<max(3.14,0.07);
    cout<<"\n maximum no is "<<max(9,50);
    cout<<"\n maximum no is "<<max(1.22,1.0);

}
int max(float a, float b)
{
    if(a>b)
        return a;
    else
        return b;
}
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
