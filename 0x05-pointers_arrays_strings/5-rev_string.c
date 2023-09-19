#include "main.h"
/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;

	for ( ; s[i] != '\0'; )
		i++;

	while (i)
		_putchar(s[--i]);

	_putchar('\n');
}
