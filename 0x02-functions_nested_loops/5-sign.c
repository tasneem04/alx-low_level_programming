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
int res;
if (n>0)
{
res=1;
_putchar('+');
}else if(n==0)
{
res=0;
_putchar('0');
     
} else 
{
res=-1;
_putchar ('-');
}
return (res);
}
    
