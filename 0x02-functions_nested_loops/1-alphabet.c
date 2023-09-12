#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * pint_alphabet - print from a to z in lower cases
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char c;
for (c = 'a' ; c <= 'z'; c++)
_putchar(c);

_putchar('\n');
}
