#include <stdio.h>
/**
 * main - Program tht prints all single digits numbers of base 10. only using putchar.
 *
 * Return: 0 (success)
 */

int main (void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar ((num % 10) + '0');

	putchar ('\n');

	return (0);
}
