#include <stdio.h>
/**
 * main - Program that prints the lowercase alphabet in reverse using only putchar
 *
 * return: 0 (Success)
 */
int main (void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar (letter);

	return (0);
}
