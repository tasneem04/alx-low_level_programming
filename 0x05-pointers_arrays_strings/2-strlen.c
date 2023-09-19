#include "main.h"

/*
 *_strlen - fucntion that shows the lenth of string
 *@s :char pointer
 *Return int
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
