#include "main.h"
#include <string.h>
#include <limits.h>

void reverse_string(char *s)
{
	int len, i;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}

/**
 * print_int - concatenates the integer argument to the buffer
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: number of chars added to the buffer
 */
int print_int(va_list args, char *buf, unsigned int ibuf)
{
	int arg, digit, isnegative;
	unsigned int i;
	char str[100];

	arg = va_arg(args, int);
	
	isnegative = 0;

	if (arg < 0)
	{
		arg *= -1;
		isnegative = 1;
		ibuf = concat_to_buf(buf, '-', ibuf);
	}
	
	
	for (i = 0; arg; i++)
	{
		digit = arg % 10;
		arg /= 10;
		str[i] = digit + '0';
	}

	reverse_string(str);
	str[i] = '\0';
	for (i = 0; str[i]; i++)
	{
		ibuf = concat_to_buf(buf, str[i], ibuf);
	}
	return (i + isnegative);
}
