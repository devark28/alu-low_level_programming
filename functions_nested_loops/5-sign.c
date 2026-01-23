#include "main.h"

/**
 * print_sign - checks 1 if it's positive or else -1 or 0
 * @c: the number to test
 * Return: int
 */
int print_sign(int c)
{
	if (c > 0)
		return (1);
	if (c < 0)
		return (-1);
	return (0);
}
