#include "main.h"

/**
 * _strlen - function that returns the lengths of string
 * @s: char string pointer
 * Return: string length
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
