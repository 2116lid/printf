#include "main.h"
#include <string.h>

/**
 * _printf - a function that produces output
 * according to a format.
 * @format: a character string.
 * Return: -1 on failure and len on sucssess.
 *
 */
int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", pri_str}, {"%c", pri_ch},
		{"%%", pri_37},	{"%i", printf_int},
		{"%d", printDec}
	};
	va_list list;
	unsigned int i = 0, j, len = 0;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
back:

	while (format[i] != '\0')
	{
            for (j = 0; j < 6; j++)
            {
                if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
                {
                    len += m[j].f(list);
                    i += 2;
		    goto back;
                }
		j--;
            }
	    _putchar(format[i]);
	    len++;
	    i++;
        }
        va_end(list);
        return (len);
}
