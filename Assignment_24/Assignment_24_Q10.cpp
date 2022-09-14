//10. Write functions using function overloading to add two numbers having different data types
float add(int a,int b);
float add(float a,float b);
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n sum="<<add(1,30)<<endl;
    cout<<"\n sum="<<add(1.0,3)<<endl;
    cout<<"\n sum="<<add(10,3.0)<<endl;

    return 0;
}
float add(int a,int b)
{
   return a+b;
}
float add(float a,float b)
{
    return a+b;
}
float add(int a,float b)
{
    return a+b;
}
float add(float a,int b)
{
    return a+b;
}
