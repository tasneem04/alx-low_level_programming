#include <stdio.h>
#include "main.h"
int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1;
    }
    else if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return _sqrt_helper(n, 1);
    }
}

int _sqrt_helper(int n, int guess)
{
    if (guess * guess == n)
    {
        return guess;  // Found the square root
    }
    else if (guess * guess > n)
    {
        return -1;     // Square root is not a whole number (not found)
    }
    else
    {
        return _sqrt_helper(n, guess + 1);  // Try the next guess
    }
}
