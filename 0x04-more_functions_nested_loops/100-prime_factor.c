#include <stdio.h>
#include "main.h"

/**
 * print_number - Prints a number
 * @n: The number to print
 */
void print_number(int n)
{
	unsigned int num = n;
		print_number(num / 10);
}
