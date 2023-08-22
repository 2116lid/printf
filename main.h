#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct format - function to handle conversions.
 * @id: type char pointer.
 * @func: pointer to conversion specifiers.
 *
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int pri_str(va_list val);
int pri_ch(va_list val);
int pri_37(va_list list);
int printf_srev(va_list list);
int printHexAux(unsigned long int num);
int printHEXAux(unsigned int num);
int printExcString(va_list val);
int printHEX(va_list val);
int printfHex(va_list val);
int printOct(va_list val);
int printUnsigned(va_list list);
int printBin(va_list val);
int printf_rot13(va_list list);
int printf_int(va_list list);
int printDec(va_list list);

#endif
