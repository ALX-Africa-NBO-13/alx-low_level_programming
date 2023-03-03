#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 * Return: the 9 times table, starting with 0.
 */

void times_table(void)
{
	int j, i, n;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar("%d * %d, ", j, i, i * j);
		}
		_putchar('\n');
	}
}
