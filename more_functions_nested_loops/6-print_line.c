#include "main.h"

/**
* print_line - Draws a straight line using character _
*                   * @n: The number of _ characters to be print
*/
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0 ; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
