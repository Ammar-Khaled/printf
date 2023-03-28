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
	int i, j, is_alpha;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotted[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *s;
	char null[] = "(avyy)";

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
		for (is_alpha = 0, j = 0; j < 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				is_alpha = 1;
				ibuf = concat_to_buf(buf, rotted[j], ibuf);
				break;
			}
		}
		if (!is_alpha)
		{
			ibuf = concat_to_buf(buf, s[i], ibuf);
		}
	}

	return (i);
}
