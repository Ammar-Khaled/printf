#include "main.h"

/**
 * print_prg - concatenates the '%' character to the buffer
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: 1 on Success
 */
int print_prg(__attribute__((unused)) va_list args, char *buf, unsigned int ibuf)
{
	
	concat_to_buf(buf, '%', ibuf);

	return (1);
}
