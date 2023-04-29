#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: character to checked for case
 *
 * Return: 1 if uppercase, 0 if not uppercase
 * Author - Gloria Agiamah
 * Date - 29-04-23
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
