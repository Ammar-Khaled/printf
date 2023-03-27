#include "main.h"

/**
 * print_rot13 - printed string rotted by 13
 * @args: variadic arguments list
 * @buf: buffer pointer
 * @ibuf: buffer index
 *
 * Return: number of chars added to the buffer
 */
int print_rot13(va_list args, char *buf, unsigned int ibuf)
{
	int i, j, count;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotted[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	char null[] = "(avyy)";

	count = 0;
	s = va_arg(args, char *);

	if (!s)
	{
		for (i = 0; i < 6; i++)
		{
			ibuf = concat_to_buf(buf, null[i], ibuf);
		}
		return (6);
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				ibuf = concat_to_buf(buf, rotted[j], ibuf);
				count++;
				break;
			}
		}
	}

	return (count);
}
