#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Create an array of characters and initialize it with a specific char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Return: A pointer to the created array, or NULL if size is 0 or memory allocation fails.
 */
char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return (NULL);

    char *arr = (char *)malloc(size * sizeof(char));

    if (arr == NULL)
        return (NULL);
 
    for (unsigned int i = 0; i < size; i++)
    {
        arr[i] = c;
    }

    return (arr);
}
