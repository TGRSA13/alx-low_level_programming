#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
        int i, n, r = 0, l = 0;
        char *str;
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        if (ac == 0 || av == NULL)
                return (NULL);
        for (i = 0; i < ac; i++)
        {
                for (n = 0; av[i][n]; n++)
                        l++;
        }
        l += ac;
<<<<<<< HEAD

=======
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
        str = malloc(sizeof(char) * l + 1);
        if (str == NULL)
                return (NULL);
        for (i = 0; i < ac; i++)
        {
        for (n = 0; av[i][n]; n++)
        {
                str[r] = av[i][n];
                r++;
        }
        if (str[r] == '\0')
        {
                str[r++] = '\n';
        }
<<<<<<< HEAD
        
        return (str);
	}
=======
        }
        return (str);
}
>>>>>>> 35bf3eb0288454b53a0651574fbcfd90e08eb249
