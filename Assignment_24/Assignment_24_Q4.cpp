//4. Define a function to print Pascal Triangle up to N lines.
int fact(int n);
int nCr(int n,int r);
void genPascalsTriangle(int n);
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    genPascalsTriangle(n);
    return 0;
}
int fact(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
int nCr(int n,int r)
{
    int nume= fact(n);
    int deno= (fact(r) )*(fact(n-r));
    return nume/deno;

}
void genPascalsTriangle(int n){
   for(int i = 0; i<n; i++){
      for(int j = 0; j<(n-i-1); j++)
         cout << " ";
      for(int j = 0; j<(i+1); j++)
         cout << nCr(i, j) <<" ";
      cout << endl;
   }
}
