#include "main.h"
/**
 * _isdigit - A function that checks for digit  character.
 * @c: An input character
 * Return: 1 or 0
 */
int _isdigit(int c)
{
int res;
if (isdigit(c))
{
res = 1;
}else
res = 0;
return (res);
}
