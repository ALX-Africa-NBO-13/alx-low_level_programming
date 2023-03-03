#include "main.h"
/**
 * print_last_digit - prints the last digit of a given number
 *
 * @n: the number whose last digit is to be printed
 *
 * Return: the last digit of a number
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
	{
		n = ((last_digit * -1));
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
