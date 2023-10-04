#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - Duplicate a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicated string, or NULL on failure.
 */
char *_strdup(char *str)
{
    if (str == NULL)
        return (NULL);

    int len = 0;
    while (str[len] != '\0')
        len++;

    char *duplicate = (char *)malloc((len + 1) * sizeof(char));

    if (duplicate == NULL)
        return (NULL);

    for (int i = 0; i <= len; i++)
        duplicate[i] = str[i];

    return (duplicate);
}
