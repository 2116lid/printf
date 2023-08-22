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

/**
 * pri_37 - prints the char 37
 * which is ASCII value of %.
 * Return: 1.
 */
int pri_37(va_list list)
{
        (void)(list);
        _putchar(37);
        return (1);
}

/**
 * printf_srev - function that prints a str in reverse
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int printf_srev(va_list list)
{

        char *s = va_arg(list, char*);
        int i;
        int j = 0;

        if (s == NULL)
                s = "(null)";
        while (s[j] != '\0')
                j++;
        for (i = j - 1; i >= 0; i--)
                _putchar(s[i]);
        return (j);
}


/**
 * pri_str - print a string.
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

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 or -1 on error.
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}

/**
 * printf_int - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_int(va_list list)
{
	int n = va_arg(list, int);
	int num, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * printDec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */

int printDec(va_list list)
{
	int n = va_arg(list, int);
	int num, last = n % 10, digit;
	int  i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}


/**
 * printf_rot13 - printf str to ROT13 place into buffer
 * @args: type struct va_arg where is allocated printf arguments
 * Return: counter
 *
 */
int printf_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}


/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
