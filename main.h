#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_buf(char *buf, unsigned int nbuf);
unsigned int concat_to_buf(char *buf, char c, unsigned int ibuf);

int (*get_print_func(const char *format,unsigned int index))(va_list,char*,unsigned int);

int print_chr(va_list, char *, unsigned int);
int print_str(va_list, char *, unsigned int);
int print_prg(va_list, char *, unsigned int);
int print_int(va_list, char *, unsigned int);
int print_rev(va_list, char *, unsigned int);
int print_rot13(va_list, char *, unsigned int);
int print_unt(va_list, char *, unsigned int);
int printlint(va_list, char *, unsigned int);
int printlunt(va_list, char *, unsigned int);
int printhint(va_list, char *, unsigned int);
int printhunt(va_list, char *, unsigned int);
int printpint(va_list, char *, unsigned int);
int print_space_int(va_list, char *, unsigned int);

#endif
