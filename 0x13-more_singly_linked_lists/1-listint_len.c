#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked list
 * @h: input head of list
 * Return: number of elements in linked list
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;
    while (h) {
        printf("%d\n", h->n);
        h = h->next;
        count++;
    }
    return count;
}
