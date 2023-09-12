#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * islower - check if c is lowercase
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
    if ( islower(c) != 0 )
    return (1);
    else
    return (0);
}
