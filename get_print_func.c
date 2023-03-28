#include "main.h"

/**
 * get_print_func - selects the suitable print function
 * @format: the string format
 * @index: index of the argument specifier within the format
 *
 * Return: pointer to the suitable function
 */
int (*get_print_func(const char *format, unsigned int index))(va_list, char *, unsigned int)
{
	switch (format[index])
	{
		case 'c':
			return (print_chr);

		case 's':
			return (print_str);
		case '%':
			return (print_prg);
		case 'i':
			return (print_int);
		case 'd':
			return (print_int);
		case 'r':
			return (print_rev);
		case 'R':
			return (print_rot13);
		case 'u':
			return (print_unt);
		case 'l':
			switch (format[index + 1])
			{
			case 'i':
			case 'd':
				return (printlint);
			case 'u':
				return (printlunt);
			}
			break;
		case 'h':
			switch (format[index + 1])
			{
			case 'i':
			case 'd':
				return (printhint);
			case 'u':
				return (printhunt);
			}
			break;
		case '+':
			return (printpint);
		case ' ':
			return (print_space_int);
		}

	return (NULL);
}
