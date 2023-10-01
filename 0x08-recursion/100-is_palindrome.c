#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: The input string
 *
 * Description:
 * This function checks if the given string is a palindrome. It returns 1 if
 * the string is a palindrome and 0 if it is not. An empty string is considered a palindrome.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
    {
        if (s[left] != s[right])
        {
            return 0;
        }
        left++;
        right--;
    }

    return 1;
}
