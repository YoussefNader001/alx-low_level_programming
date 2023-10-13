#include "main.h"

/**
 * _isupper - a function that checks for number characters
 * @c: input
 * Return: 1 if c is a number, 0 otherwise
 */
int _isupper(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
