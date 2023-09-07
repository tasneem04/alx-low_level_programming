#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int int1;
long int longint;
long long int lnint;
char char1;
float float1;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char1));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(int1));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longint));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lnint));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(float1));

return (0);
}
