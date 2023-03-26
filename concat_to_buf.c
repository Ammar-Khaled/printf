#include "main.h"

/**
 * concat_to_buf - concatenate a character to the buffer
 * @buf: pointer to the start of the buffer
 * @c: the character to concatenate
 * @ibuf: the index of the first unoccupied place of the buffer
 *
 * Return: the new ibuf after concatenation
 */
unsigned int concat_to_buf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, 1024);
		i = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
