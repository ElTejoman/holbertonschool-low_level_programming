#include "main.h"

/**
 * _isalpha - checks id a character is alphabetic.
 * @c: character checked
 *
 * Return: If character is letter 1, other answer 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
