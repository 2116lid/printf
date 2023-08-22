#include "main.h"
#include <string.h>

/**
 * _printf - a function that produces output
 * according to a format.
 * @format: a character string.
 * Return: -1 on failure and len on sucssess.
 *
 */
int _printf(const char *format, ...)
{
	new_t specifiers[] = {
		{"%s", pri_str}, {"%c", pri_ch},
		{"%%", pri_37}, {"%r", printf_srev}
	};
	va_list list;
	unsigned int i = 0, j, len = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; specifiers[j].conv != NULL; j++)
			{
				if (strcmp(format + i,  specifiers[j].conv) == 0)
				{
					len += specifiers[j].func(list);
					break;
				}
			}
				if (specifiers[j].conv == NULL)
				{
					_putchar('%');
					_putchar(format[i]);
					len += 2;
				}
				i += strlen(specifiers[j].conv);
			}
			else
			{
				_putchar(format[i]);
			} i++;
	}
		va_end(list);
		return (len);
}
