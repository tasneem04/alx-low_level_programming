#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include "main.h"

/**
 * print_sign - check c sign 
 *
 * 
 */
int print_sign(int n)
{
if (n>0)
{
return (1);
_putchar("+");
}else if(n==0)
{
return (0);
_putchar("0");
     
} else 
{
return (-1);
_putchar ("-");
}
}
    
