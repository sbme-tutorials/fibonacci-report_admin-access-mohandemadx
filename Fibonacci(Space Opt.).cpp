// Program to print the nth Fibonacci Number
// Using Space Optimized Programming

#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int a=0,b=1,c;
    if(n==0)
        return a;
    for(int i=2; i<=n; i++)
    {
       c=a+b;
       a=b;
       b=c;
    }
    return c;
}

//main func
int main ()
{   
    int n;
    cout << "n = ";
    cin >> n;
    cout <<"The " << n << "th Fibonacci Number is " << Fibonacci(n);
}