#include <iostream>

using namespace  std;

int fib( int res)
{
    if (res <= 1) 
    {
     return 1;
    } 
    else if (res == 2) 
    {
     return 1;
    } 
    else 
    {
     return fib(res - 1) + fib(res - 2);
    }
}

int main()
{
    int i, n, res;
    cout<<"print n = ";
    cin>>n;
    cout<<fib(n)<<endl;
}

