#include <stdio.h>
#include "main.h"

/**
 * print_array - print n digit of an array
 * @a: array
 * @n: number of values
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(",");
		}

		i++;
	}

	printf("\n")
		;
}
