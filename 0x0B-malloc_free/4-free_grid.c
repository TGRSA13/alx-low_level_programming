#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees 2d array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: nothing
 *
 */
void free_grid(int **grid, int height)
{
        int i;
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        for (i = 0; i < height; i++)
        {
                free(grid[i]);
        }
        free(grid);
}
