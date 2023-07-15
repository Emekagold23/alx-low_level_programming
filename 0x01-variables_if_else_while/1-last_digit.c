#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
        int n;
        int m;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        m =n % 10;
        if (m > 5)
                printf("last digit of %d is %d and is greater than 5", n, m);
        else if (m == 0)
                printf("last digit of %d is %d and is zero", n, m);