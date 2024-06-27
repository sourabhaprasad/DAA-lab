# Algorithms

| Algorithm Name                                               | Description                                        |
| ------------------------------------------------------------ | -------------------------------------------------- |
| [GCD](#euclid)                                               | to find the greatest common divisor of two numbers |
| [Maximum Value](#largest)                                    | to find the largest number in an array             |
| [Distinct Elements](#finding-distinctuniqueness-in-an-array) | to print distinct values from an array             |

## GCD of a number <a name="euclid"></a>

**Algorithm Euclid(a,b)**
// algorithm to find the greatest common divisor of two numbers <br>
// input: two numbers a, b <br>
// output: GCD <br>
while b != 0 do <br>
&nbsp;&nbsp; r <- a mod b <br>
&nbsp;&nbsp; a <- b <br>
&nbsp;&nbsp; b <- r <br>
return a <br>

<br>

## Finding largest value in an array <a name="largest"></a>

**Algorithm largest(arr, n)**
// Algorithm to find the largest number in an array <br>
// Input: An array arr of integers, and integer n indicating the number of elements in arr <br>
// Output: The largest integer in the array arr <br>
max = arr[0] <br>
for i from 1 to n-1 do <br>
&nbsp;&nbsp; if arr[i] > max <br>
&nbsp;&nbsp;&nbsp;&nbsp; max = arr[i] <br>
return max <br>

<br>

## Finding distinct/uniqueness in an array <a name="distinct"></a>

**Algorithm distinct(arr,n)** <br>
// prints distinct elements in a given array <br>
// input: an array **arr** of input size n <br>
// output: print all unique elements <br>
unique[] = {} <br>
for i <- 0 to n-1 do <br>
&nbsp; &nbsp; if arr[i] not in unique then <br>
&nbsp; &nbsp;&nbsp; &nbsp; add arr[i] to unique <br>
print arr[i] <br>

<br>
