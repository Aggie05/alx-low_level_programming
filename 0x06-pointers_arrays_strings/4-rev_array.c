#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: array a
 * @n: an element of an array
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0; j = (n - 1); i < j; i++, j--)
	{
	    t =	a[i];
	    a[i] = a[j];
	    a[j] = t;
	}
}
