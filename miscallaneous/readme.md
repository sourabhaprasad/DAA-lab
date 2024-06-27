# Algorithms

## GCD of a number

**ALGORITHM Euclid(a,b)** <br>
// algorithm to find the greatest common divisor of two numbers <br>
// input: two numbers a, b <br>
// output: GCD <br>
while b != 0 do <br>
<t>r <- a mod b <br>
<t>a <- b <br>
<t>b <- r <br>
return a <br>

<br>

## Finding largest value in an array

**ALGORITHM largest(arr, n)** <br>
// Algorithm to find the largest number in an array <br>
// Input: An array arr of integers, and integer n indicating the number of elements in arr <br>
// Output: The largest integer in the array arr <br>
max = arr[0] <br>
for i from 1 to n-1 do <br>
<t>if arr[i] > max <br>
<t>max = arr[i] <br>
return max <br>
