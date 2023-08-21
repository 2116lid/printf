#include "main.h"

/**
 * pri_ch - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int pri_ch(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
