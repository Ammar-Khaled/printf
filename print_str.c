#include "main.h"

/**
 * print_str - concatenates the string argument to the buffer
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: number of chars added to the buffer
 */
int print_str(va_list args, char *buf, unsigned int ibuf)
{
	char *str;
	char null[] = "(null)";
	unsigned int i;

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
		ibuf = concat_to_buf(buf, str[i], ibuf);
	}

	return (i);
}
