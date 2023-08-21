#include "main.h"
#include <string.h>
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int pri_str(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
}
