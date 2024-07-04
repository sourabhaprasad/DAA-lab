/*
Author: Sourabha K H
Created: 4/7/2024 12.30 PM
Modified:
*/

#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char source, char dest, char temp)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", source, dest);
        return;
    }
    towerOfHanoi(n - 1, source, temp, dest);
    printf("\n Move disk %d from rod %c to rod %c", n, source, dest);
    towerOfHanoi(n - 1, temp, dest, source);
}

int main()
{
    int n = 2;                      // Number of disks
    towerOfHanoi(n, 'S', 'D', 'T'); // Source, Destination and Temporary rods
    return 0;
}
