#include "main.h"
/**
 * print_to_98 - prints all natural numbers upto 98.
 *
 * @n: number to be printed
 *
 * Return: all natural numbers upto 98.
 */

void print_to_98(int n)
{
	for (n = 0; n <= 99; n++)
	{
		_putchar("%d,", n);
	}
	_putchar('\n');
}
