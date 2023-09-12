#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - print the last digit 
 *
 * 
 */
int print_last_digit(int c)
{
int r;

if (r < 0)
n = -1 * (r % 10);
else
n = r % 10;
_putchar((n % 10) + '0');

return (n % 10);
}
    
