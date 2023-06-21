#include <stdio.h>
/**
 * main - Print alphabet in lower case with c program without "e" and "q"
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		putchar(letter);
	}
	putchar ('\n');
	return (0);
}
