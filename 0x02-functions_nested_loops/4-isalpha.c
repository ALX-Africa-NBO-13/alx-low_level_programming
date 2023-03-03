#include "main.h"
/**
 * _isalpha - it checks whether a character is an alphabet
 *
 * @c: this is the value to be checked
 *
 * Return: 1 if the character is a letter and 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
