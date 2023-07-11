#include <stdlib.h>
#include <string.h>

/**
* argstostr - concatenates arguments
*
* @ac: arguments count
* @av: arguments
*
* Return: pointer to string if success, NULL if failed
*/

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len;
	char *str;

	len = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	/* calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;
	/* allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (len + ac + 1));
	if (str == NULL)
		return (NULL);
	/* concatenate the arguments */
	for (i = 0, len = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[len++] = av[i][j];
		str[len++] = '\n';
	}
	str[len] = '\0';
	return (str);
}
