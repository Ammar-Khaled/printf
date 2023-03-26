#include <unistd.h>
/**
 * print_buf - print the buffer
 * @buf: pointer to the start of the buffer
 * @nbuf: number of bytes to print
 *
 * Return: the number of bytes printed
 */
int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
