#include "main.h"

/**
 * print_last_digit - function that finds the last digit of a number
 * @n: value being tested.
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int last = n % 10;
	_putchar((last < 0 ? last * -1 : last) + '0');
	return (last < 0 ? last * -1 : last);
}
