#include "main.h"

/*
 * _strlen - fucntion that shows the length of string
 *@s :char pointer
 *@length :int count
 * Return int
 */

int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}	
return (length);
}
