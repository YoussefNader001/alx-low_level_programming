#include "main.h"

/**
 * _isupper - a function that checks for number characters
 * @c: input
 * Return: 1 if c is a number, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
