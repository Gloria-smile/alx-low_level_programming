#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
 * Author - Gloria Agiamah
 * Date - 29-04-23
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			line++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
