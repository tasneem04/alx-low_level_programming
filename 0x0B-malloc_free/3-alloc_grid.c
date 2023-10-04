#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height) {
    if (width <= 0 || height <= 0) {
        return NULL;  // Return NULL for invalid width or height
    }

    int **grid = (int **)malloc(height * sizeof(int *));  // Allocate memory for rows

    if (grid == NULL) {
        return NULL;  // Return NULL if memory allocation fails
    }

    for (int i = 0; i < height; i++) {
        grid[i] = (int *)malloc(width * sizeof(int));  // Allocate memory for columns

        if (grid[i] == NULL) {
            // Free previously allocated memory and return NULL if allocation fails
            for (int j = 0; j < i; j++) {
                free(grid[j]);
            }
            free(grid);
            return NULL;
        }

        for (int j = 0; j < width; j++) {
            grid[i][j] = 0;  // Initialize elements to 0
        }
    }

    return grid;  // Return a pointer to the allocated and initialized grid
}

