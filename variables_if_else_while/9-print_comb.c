#include <stdio.h>
/**
 * main - Program that prints all posible combinations of single-digit numbers
 *
 * Return: 0 (succes)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar ('\n');

	return (0);
}
