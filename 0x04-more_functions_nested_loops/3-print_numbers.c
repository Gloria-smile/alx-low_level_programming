#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 * Author - Gloria Agiamah
 * Date - 29-04-23
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
