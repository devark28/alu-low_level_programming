#include "main.h"

/**
 * print_alphabet - prints _putchar
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);

	_putchar('\n');
}
