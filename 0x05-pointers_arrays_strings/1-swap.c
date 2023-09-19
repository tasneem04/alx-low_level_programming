#include "main.h"

/*
 *swap_int -  a function that swaps the values of two integers.
 * @a:int
 * @b:int
 * @swap1:int
 * @swap2:int
 * Return - void
 */

void swap_int(int *a, int *b)
{
int swap1, swap2;
swap1 = *a;
swap2 = *b;
*b = swap1;
*a = swap2;
}
