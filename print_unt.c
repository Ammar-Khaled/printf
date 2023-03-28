#include "main.h"

/**
 * print_unt - prints unsigned integer "%u"
 * @arguments: variadic list
 * @buf: buffer pointer
 * @ibuf: buffer index
 * 
 * Return: number of chars printed
*/
int print_unt(va_list arguments, char *buf, unsigned int ibuf)
{
	unsigned int int_in, int_temp, div, i;

	int_in = va_arg(arguments, unsigned int);

	div = 1;
	int_temp = int_in;
	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; i++, div /= 10)
	{
		ibuf = concat_to_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}

	return (i);
}
