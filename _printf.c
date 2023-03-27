#include "main.h"
/**
 * _printf - print formatted data
 * @format: the string format
 *
 * Return: on success returns the number of chars printed,
 * otherwise returns negative value;
 */
int _printf(const char *format, ...)
{
	unsigned int i, ibuf, fail;
	char *buf;
	int (*function)(va_list, char *, unsigned int);
	va_list args;

	fail = 0;
	va_start(args, format);
	buf = malloc(sizeof(char) * 1024);
	if (!format || !buf)
		fail = 1;
	ibuf = 0;
	for (i = 0; format[i] && !fail; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1])
			{
				function = get_print_func(format, i + 1);
				if (function)
				{
					i++, ibuf += function(args, buf, ibuf);
				}
				else
					fail = 1;
			}
			else
				fail = 1;
		}
		else
			ibuf = concat_to_buf(buf, format[i], ibuf);
		if (ibuf == 1024)
			print_buf(buf, ibuf), ibuf = 0;
	}
	if (fail)
	{
		free(buf);
		return (-1);
	}
	print_buf(buf, ibuf), free(buf), va_end(args);
	return (ibuf);
}
