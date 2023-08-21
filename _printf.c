#include "main.h"

/**
 * _printf - a function that produces output
 * according to a format.
 * @format: a character string.
 * Return: -1 on failure and len on sucssess.
 *
 */
int _printf(const char *format, ...)
{
	unsigned int i, len = 0, len1;

	va_list list;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			i++;
		}
		if (format[i] == '%' && format[i + 1] == 's')
		{
			len1 = pri_str(list);
			i++;
			len += (len1 - 1);
		}
		if (format[i] == '%' && format[i + 1] == '%')
			_putchar('%');
		len += 1;
	}
	va_end(list);
	return (len);
}
