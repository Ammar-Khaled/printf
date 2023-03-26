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
	unsigned int i, ibuf, len;
	char *buf;
	int (*function)(va_list, char *, unsigned int);
	va_list args;

	va_start(args, format);
	buf = malloc(sizeof(char) * 1024);
	if (!foramt || !buf)
	{
		free(buf);
		return (-1);
	}
	ibuf = len = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i+1])
			{
				function = get_print_func(format, i+1);
				if (function)
				{
					i++;
					function(args, buf, ibuf);
					len++;
					ibuf++;
				}
				else
				{
					free(buf);
					return (-1);	
				}
			}
			else
			{
				free(buf);
				return (-1);
			}
		}
		else
		{
			concate_to_buffer(buf, format[i], ibuf);
			len++;
			ibuf++;		
		}
		if (ibuf == 1024)
		{
			print_buf(buf, ibuf);
			ibuf = 0;
		}
	}
	print_buf(buf, ibuf), free(buf), va_end(args), return (len);
}
