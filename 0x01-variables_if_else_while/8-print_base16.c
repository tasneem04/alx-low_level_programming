#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int d;
char word;

for (d = '0'; d <= '9'; d++)
putchar(d);
for (word = 'a'; word <= 'f'; word++)
putchar(word);
putchar('\n');

return (0);
}
