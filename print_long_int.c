#include "main.h"

/**
 * printlint - concatenates the long integer argument to the buffer
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: number of chars added to the buffer
 */
int printlint(va_list arguments, char *buf, unsigned int ibuf)
{
	long int int_input;
	unsigned long int int_in, int_temp, i, div, isneg;

	int_input = va_arg(arguments, long int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = concat_to_buf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = concat_to_buf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + isneg);
}
