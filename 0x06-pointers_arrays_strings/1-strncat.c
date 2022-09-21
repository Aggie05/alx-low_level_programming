#include "main.h"

/**
 * _strncat - function to append some charx
 * @dest: first parameter
 * @src: second parameter
 * @n: 3rd parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat (dest, src, n);
	return (dest);
}
