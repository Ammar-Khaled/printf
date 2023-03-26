#include "main.h"

/**
 * print_chr - concatenates the char argument to the buffer
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: 1 on Success
 */ 
int print_chr(va_list args, char *buf, unsigned int ibuf)
{
	char ch;

	ch = va_arg(args, int);
	concat_to_buf(buf, ch, ibuf);

	return (1);
}
