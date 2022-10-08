// Program to print the nth Fibonacci Number
// Using Dynamic Programming

#include <iostream>
using namespace std;

int Fibonacci(int n)
{
    int f[n+2];
    f[0] = 0;
    f[1] = 1;

    for(int i=2; i<=n; i++)
	{
	    f[i] = f[i-1] + f[i-2];
	}
    return f[n];
}

//main func
int main ()
{   
    int n;
    cout << "n = ";
    cin >> n;
    cout <<"The " << n << "th Fibonacci Number is " << Fibonacci(n);
}