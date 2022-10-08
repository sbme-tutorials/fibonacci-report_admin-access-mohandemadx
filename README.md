# Fibonacci Series

## By: Mohand Emad

- All possible Algorithms to Find the nth element in the Fibonacci series. The Fibonacci sequence starts with
a 0 followed by a 1. After that, every value is the sum of the two values
preceding it. Here are the first seven values as an example: 0, 1, 1, 2, 3, 5, 8.

## Method I - Using recursion

General Mathematical Representation for the series: Fn = Fn-1 + Fn-2 unless n=0,1

Then if n=0 || n=1 return n.  else if n>1 return Fn-1+Fn-2.

```txt
Input: 0
Output: 0
Input: 1
Output: 1
Input: 4
Output: 3
```

The Recursion Method will Lead to a tree that will lead to a:
- Time Complexity: Exponantial O(2^n) "as every function calls two other functions."
- Space Complexity: O(n) "function call stack size"
![Time Complexity](https://user-images.githubusercontent.com/102548631/194166143-6ce2e053-7e1b-4a76-8737-ee3584bf0a5b.jpg)

## Method II - Using Daynamic Programming

To avoid the Unnecessarily Repeated work in Recursion by storing DATA in an Array


```diff
-//declaring an Array of n+2 elements
```
```txt 
int f[n+2];
// 0th and 1st number of the series are 0 and 1
f[0] = 0;
f[1] = 1;

```

The Dynamic Method will Lead to much less Time-Complexity:
- Time Complexity: O(n) for given n.
- Space Complexity: O(n) 

## Method III - Using Daynamic Programming (Space Optimized)

To avoid the Unnecessarily stored DATA in the Array, we can only store the previous two numbers


```diff
-// declaring a,b to store the previous numbers in the series
```
```txt 
int a=0,b=1
int c;
for(int i=2; i<=n; i++)
    {
       // Calc the NEXT number in the series
       c=a+b;
       // Storing the new two previous numbers
       a=b;
       b=c;
    }
```

The Space Optimization will Lead to much less Space-Complexity:
- Time Complexity: O(n) for given n.
- Space Complexity: O(1) 

## Method IV - Using Matrix Method

if we n times multiply the matrix M = {{1,1},{1,0}} to itself (in other words calculate power(M, n)), then we get the (n+1)th Fibonacci number as the element at row and column (0, 0) in the resultant matrix.
As shown in this picture:

- ![image](https://user-images.githubusercontent.com/102548631/194716579-3755ff16-9427-4137-b827-b839e16033da.png)

In Addition to the main Fibonnaci Function, we will use 2 other functions:
- Power Function
```txt
void power(int F[2][2], int n)
{
    int i;
    int M[2][2] = { { 1, 1 }, { 1, 0 } };
     
    // n - 1 times multiply the
    // matrix to {{1,0},{0,1}}
    for(i = 2; i <= n; i++)
        multiply(F, M);
}
```
- Multiplication Function
```txt
void multiply(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] +
            F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] +
            F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] +
            F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] +
            F[1][1] * M[1][1];
     
    F[0][0] = x;  F[0][1] = y;
    F[1][0] = z;  F[1][1] = w;
}
```
Similar to the Space Optimization, the Matrix Method will Lead to:
- Time Complexity: O(n) for given n
- Space Complexity: O(1)

## Method V - Using "Optimized" Matrix Method

We can do recursive multiplication to get power(M, n) in the previous method; in order to get a less Time-Complexity.
```txt
// Optimized version of power() in method 4
void power(int F[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    int M[2][2] = {{1, 1}, {1, 0}};
     
    power(F, n / 2);
    multiply(F, F);
     
    if (n % 2 != 0)
        multiply(F, M);
}
```
This Optimization will Lead to:
- Time Complexity: O(log n) for given n
- Space Complexity: O(log n) "function call stack size"

## Method VI - Using Binet’s formula

![image](https://user-images.githubusercontent.com/102548631/194717982-c007ada2-2b03-41a6-9476-4e0e97cdcac0.png)

Direct Substitution in this formula will get us the Fibonnaci Number.

This Method will Lead to:
- Time Complexity:  O(2*log n) as the power function takes log n time
- Space Complexity: O(1) "function call stack size"
