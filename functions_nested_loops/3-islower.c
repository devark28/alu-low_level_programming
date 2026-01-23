#include "main.h"

/**
 * _islower - checks 1 if it's lowercase or else 0
 * @c: the character to test
 * Return: int
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
