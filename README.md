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
Input: 2
Output: 1
Input: 10
Output: 55
```
