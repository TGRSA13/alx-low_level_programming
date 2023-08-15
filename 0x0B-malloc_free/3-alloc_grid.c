#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
        int **mee;
        int x, y;
        if (width <= 0 || height <= 0)
                return (NULL);
<<<<<<< HEAD

        mee = malloc(sizeof(int *) * height);
        if (mee == NULL)
                return (NULL);

=======
        mee = malloc(sizeof(int *) * height);
        if (mee == NULL)
                return (NULL);
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        for (x = 0; x < height; x++)
        {
                mee[x] = malloc(sizeof(int) * width);
                if (mee[x] == NULL)
                {
                        for (; x >= 0; x--)
                                free(mee[x]);
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
                        free(mee);
                        return (NULL);
                }
        }
        for (x = 0; x < height; x++)
        {
                for (y = 0; y < width; y++)
                        mee[x][y] = 0;
        }
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        return (mee);
}
