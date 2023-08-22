#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * struct format - function to handle conversions.
 *
 * @func: pointer to conversion specifiers.
 *
 */
typedef struct format{
	char *conv;
	int (*func)(va_list args);
} new_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int pri_str(va_list val);
int pri_ch(va_list val);
int pri_37(va_list list);
int printf_srev(va_list list);

#endif
