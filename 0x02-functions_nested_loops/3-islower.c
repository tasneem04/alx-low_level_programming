#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
* _islower(int c) - check if lowercase
* Return: Always 0 (Success)
*/
int _islower(int c)
{
if (islower(c) !=  0)
return (1);
else
return (0);
}
