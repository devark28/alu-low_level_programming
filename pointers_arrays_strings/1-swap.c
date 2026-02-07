#include "main.h"

/**
 * swap_int - function that swaps passed int pointers
 * @a: int pointer
 * @b: int pointer
 * Return: void
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
