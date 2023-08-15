<<<<<<< HEAD
#include "mai
=======
#include "main.h"
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
        char *str;
        unsigned int i;
        str = malloc(sizeof(char) * size);
        if (size == 0 || str == NULL)
                return (NULL);
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        for (i = 0; i < size; i++)
                str[i] = c;
        return (str);
}
