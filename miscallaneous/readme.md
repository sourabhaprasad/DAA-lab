# Algorithms

| Index | Algorithm Name                                               | Description                                        |
| ----- | ------------------------------------------------------------ | -------------------------------------------------- |
| 1.    | [GCD](#euclid)                                               | to find the greatest common divisor of two numbers |
| 2.    | [Maximum Value](#largest)                                    | to find the largest number in an array             |
| 3.    | [Distinct Elements](#finding-distinctuniqueness-in-an-array) | to print distinct values from an array             |
| 4.    | [Bubble Sort](#bubble)                                       | to sort an array using bubble sort                 |
| 5.    | [Selection Sort](#selection)                                 | to sort an array using selection sort              |

## GCD of a number <a name="euclid"></a>

**Algorithm Euclid(a,b)** <br>
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

**Algorithm largest(arr, n)** <br>
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

## Bubble Sort <a name="bubble"></a>

**Algorithm BubbleSort(a[0...n-1])** <br>
// sorts a given array using bubble sort method <br>
// input: an array a[0...n-1] <br>
// output: sorted array <br>

for i <- 0 to n-2 do <br>
&nbsp;&nbsp; for j <- 0 to n-2-i do <br>
&nbsp;&nbsp;&nbsp;&nbsp; if (a[j]>a[j+1]) <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; swap(a[j], a[j+1]) <br>

<br>

## Selection Sort <a name="selection"></a>

**Algorithm SelectionSort(a[0...n-1])** <br>
// sorts a given array using selection sort method <br>
// input: an array a[0...n-1] <br>
// output: sorted array <br>

for i <- 0 to n-2 do <br>
&nbsp;&nbsp; min <- i <br>
&nbsp;&nbsp; for j <- i+1 to n-1 do <br>
&nbsp;&nbsp;&nbsp;&nbsp; if (a[j]>a[min]) <br>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; min <- i <br>
&nbsp;&nbsp;&nbsp;&nbsp; swap(a[i], a[min]) <br>
