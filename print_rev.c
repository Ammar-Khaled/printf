#include "main.h"

/**
 * print_rev - print string reversed
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: number of printed chars
 */
int print_rev(va_list args, char *buf, unsigned int ibuf)
{
	int i, j;
	char null[] = "(llun)";
	char *str;


	str = va_arg(args, char *);
	if (!str)
	{
		for (i = 0; i < 6; i++)
		{
			ibuf = concat_to_buf(buf, null[i], ibuf);
		}
		return (6);
	}

	for (i = 0; str[i]; i++)
	{
		;
	}

	j = i - 1;
	for (; j >= 0; j--)
	{
		ibuf = concat_to_buf(buf, str[j], ibuf);
	}
	return (i);
}
