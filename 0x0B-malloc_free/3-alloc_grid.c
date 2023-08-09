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
    int **done;
    int x, y;

    if (width <= 0 || height <= 0)
        return (NULL);

    done = malloc(sizeof(int *) * height);

    if (done == NULL)
        return (NULL);

    for (x = 0; x < height; x++)
    {
        done[x] = malloc(sizeof(int) * width);

        if (done[x] == NULL)
        {
            for (; x >= 0; x--)
                free(done[x]);

            free(done);
            return (NULL);
        }
    }

    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
            done[x][y] = 0;
    }

    return (done);
}
