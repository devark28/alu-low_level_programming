#include "main.h"

/**
 * _isalpha - checks 1 if it's alphabet or else 0
 * @c: the character to test
 * Return: int
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
