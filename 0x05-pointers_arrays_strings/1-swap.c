#include "main.h"

/*
 * swap_int - function that swaps two int
 * @a:int
 * @b:int
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
