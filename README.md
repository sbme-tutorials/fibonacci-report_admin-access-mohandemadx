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
