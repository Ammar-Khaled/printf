#include "main.h"

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
	int arg, tmp_arg, div, isnegative;
	unsigned int i;
	
	arg = va_arg(args, int);

	if (arg == 0)
	{
		ibuf = concat_to_buf(buf, '0', ibuf);
		return (1);
	}

	isnegative = 0;

	if (arg < 0)
	{
		arg *= -1;
		isnegative = 1;
		ibuf = concat_to_buf(buf, '-', ibuf);
	}

	div = 1;
	tmp_arg = arg;/*ddd*/
	while (tmp_arg > 9)
	{
		div *= 10;
		tmp_arg /= 10;
	}
	/*
	div = 100
	*/
	for (i = 0; div > 0; i++, div /= 10)
	{
		ibuf = concat_to_buf(buf, ((arg / div) % 10) + '0', ibuf);
	}

	return (i + isnegative);
}
