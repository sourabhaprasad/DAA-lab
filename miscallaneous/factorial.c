/*
Author: Sourabha K H
Created: 4/7/2024 11.15 AM
Modified:
*/

#include <stdio.h>
#include <time.h>

long factorial(int n)
{
    if (n == 0 || n == 1) // Start and stop conditions
        return 1;
    else
        return (n * factorial(n - 1));
}

int main()
{
    int number;
    long fact;
    printf("Enter a number: ");
    scanf("%d", &number);

    clock_t start_time = clock(); // Get the start time

    fact = factorial(number);

    clock_t end_time = clock();                                             // Get the end time
    double elapsed_time = (double)(end_time - start_time) / CLOCKS_PER_SEC; // Calculate elapsed time

    printf("Factorial of %d is %ld\n", number, fact);
    printf("Elapsed time: %.6f seconds\n", elapsed_time);
    return 0;
}
