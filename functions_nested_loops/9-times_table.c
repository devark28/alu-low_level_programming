#include "main.h"

/**
 * times_table - function to print the 9 times tables
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		/*print the first column of 0s*/
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			int prod = (i * j);

			/*product is more than one digit and print the first digit*/
			if ((prod / 10) > 0)
			{
				_putchar((prod / 10) + '0');
			}
			/*product is single digit so print space for padding*/
			else
			{
				_putchar(' ');
			}

			/*print last/second digit to after space or first digit above*/
			_putchar((prod % 10) + '0');

			/*add comma separators to non-last row iterations*/
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
