#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers up to 98
 * @n: number to be counting from
 * Return: void
 *
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		int i;

		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", i);
	}
	else
	{
		int i;

		for (i = n; i < 98; i++)
			printf("%d, ", i);
		printf("%d\n", i);
	}
}
