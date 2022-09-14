//3. Define a function to calculate x raised to the power y.
int power(int x,int y);
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x and y";
    cin>>x>>y;
    cout<<x<<" raised to "<<y<<" = "<<power(x,y);
    return 0;
}
int power(int x,int y)
{
    int ans=1,i;
    for(i=0;i<y;i++)
    {
        ans=ans*x;
    }
    return ans;
}
