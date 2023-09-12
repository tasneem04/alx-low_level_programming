#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
* _isalpha(int c) - check alphabet 
*/
int _isalpha(int c)
{
if (isalpha(c) != 0)
return (1);
else
return (0);
}
