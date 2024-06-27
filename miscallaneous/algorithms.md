# Algorithms

## GCD of a number

**ALGORITHM Euclid(a,b)**
// algorithm to find the greatest common divisor of two numbers
// input: two numbers a, b
// output: GCD
while b!= 0 do
r <- a mod b
a <- b
b <- r
return a

<br>

## Finding largest value in an array

**ALGORITHM largest(arr, n)**
// Algorithm to find the largest number in an array
// Input: An array arr of integers, and integer n indicating the number of elements in arr
// Output: The largest integer in the array arr
max = arr[0]
for i from 1 to n-1 do
If arr[i] > max
max = arr[i]
return max
