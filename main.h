#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int pri_str(va_list val);
int pri_ch(va_list val);
int pri_37(void);

#endif
