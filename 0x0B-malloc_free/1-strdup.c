#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
        char *aaa;
        int i, r = 0;
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        if (str == NULL)
                return (NULL);
        i = 0;
        while (str[i] != '\0')
                i++;
        aaa = malloc(sizeof(char) * (i + 1));
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        if (aaa == NULL)
                return (NULL);
        for (r = 0; str[r]; r++)
                aaa[r] = str[r];
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        return (aaa);
}
