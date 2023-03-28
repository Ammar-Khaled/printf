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
		}

	return (NULL);
}
