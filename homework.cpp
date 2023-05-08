#include <iostream>

using namespace  std;

void fib( int n)
{
   int k, res = 0, p = 1;
   for(int i = 1; i <= n; i++)
   {
        cout<<res<<endl;
        k = res;
        res = res + p;
        p = k;
   }
}

int main()
{
    int i, n, res;
    cout<<"print n = ";
    cin>>n;
    fib(n);
}

