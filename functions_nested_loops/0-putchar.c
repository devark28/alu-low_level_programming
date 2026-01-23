#include "main.h"

/**
 * main - prints _putchar
 * Return: 0
 */
int main(void)
{
	const char str[9] = "_putchar\n";
	for (int i = 0; i < 9; i++) {
		_putchar(str[i]);
	}
	return (0);
}
