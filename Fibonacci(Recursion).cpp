// Program to print the nth Fibonacci Number
// Using Dynamic Programming

#include <iostream>
using namespace std;

//recursion
int Fibonacci(int n)
{
    if (n<=1)
        return n;
    else
        return Fibonacci(n-1)+Fibonacci(n-2);
}

//main func
int main ()
{   
    int n;
    cout << "n = ";
    cin >> n;
    cout <<"The " << n << "th Fibonacci Number is " << Fibonacci(n);
}