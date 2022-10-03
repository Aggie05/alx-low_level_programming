#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates array of chars,
 * and initialize it with a specific char
 * @size: size of array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (success) NULL (error)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + 1) = c;
		i++;
	}

	*(p + 1) = '\0';

	return (p);
}
