# Algorithms

| Algorithm Name              | Description                                                  |
| --------------------------- | ------------------------------------------------------------ |
| [Euclid(a,b)](#euclid)      | Algorithm to find the greatest common divisor of two numbers |
| [largest(arr, n)](#largest) | Algorithm to find the largest number in an array             |

## GCD of a number

### Euclid(a,b) <a name="euclid"></a>

// algorithm to find the greatest common divisor of two numbers <br>
// input: two numbers a, b <br>
// output: GCD <br>
while b != 0 do <br>
&nbsp;&nbsp; r <- a mod b <br>
&nbsp;&nbsp; a <- b <br>
&nbsp;&nbsp; b <- r <br>
return a <br>

<br>

## Finding largest value in an array

### largest(arr, n) <a name="largest"></a>

// Algorithm to find the largest number in an array <br>
// Input: An array arr of integers, and integer n indicating the number of elements in arr <br>
// Output: The largest integer in the array arr <br>
max = arr[0] <br>
for i from 1 to n-1 do <br>
&nbsp;&nbsp; if arr[i] > max <br>
&nbsp;&nbsp;&nbsp;&nbsp; max = arr[i] <br>
return max <br>
