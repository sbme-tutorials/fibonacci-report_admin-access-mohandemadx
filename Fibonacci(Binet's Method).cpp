// Program to print the nth Fibonacci Number
// Using Binet's Formula

#include <iostream>
#include <cmath>
using namespace std;


//main func
int main ()
{   
    int n;
    double a = (1+sqrt(5))/2;
    double b = (1-sqrt(5))/2;
    cout << "n = ";
    cin >> n;
    cout <<"The " << n << "th Fibonacci Number is " << (pow(a,n)-pow(b,n))/sqrt(5);
}