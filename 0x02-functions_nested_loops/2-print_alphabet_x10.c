#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * print_alphabet_x10 - print from a to z in lower cases
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char c;
int i;

for (i = 0 ; i <= 9 ; i++)
{
for (c = 'a' ; c <= 'z'; c++)
printf("%c", c);

printf("\n");
}

}
