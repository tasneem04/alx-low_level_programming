#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);

    int result = num1 * num2;

    printf("%d\n", result);

    return (0);
}

