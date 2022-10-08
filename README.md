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
