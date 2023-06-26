#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @c: The number checked.
 *
 * Return: 1 if the number is a digit, if not 0
 */
int _isdigit(int c)
{
		if (c >= '0' && c <= '9')
		return (1);

		else
		return (0);
}
