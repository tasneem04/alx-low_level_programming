#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - a function that prints a string in reverse,
 * followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}

