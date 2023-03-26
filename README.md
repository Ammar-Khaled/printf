## printf()
The printf project is a collaboration between Ammar Khaled  and Seif Badawy, actual students of Software Engineering at ALX School, were a function named "_printf" imitates the actual "printf" command located in the stdio.h library. It contains some of the basic features and functions found in the manual 3 of "printf".

_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:

	int _printf(const char *format, ...)

Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.

	
If the program runs successfully, the **return value** is the amount of chars printed.
	
| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| s  | String of characters  |
| %  | Character  |
| d or i | Signed decimal integer |

----------------------------------------------

#Examples:
1- printing the characters 'A', 'L', 'X'
	+Use: _printf("%c%c%c", 'A', 'L', 'X');
	+Output: ALX
	
---------------------------------------------
#Function Files
### _printf.c
Our Own Printf Function That Performs Formatted Output Conversion And Print Data.

------------

### main.h
Header File Were All Prototypes Are Saved.

------------

### get_print_func.c
Pointer To A Function That Selects The Correct Function To Perform The Operation.

------------

### print_buf.c
Function That Prints The Buffer.

------------

### concat_to_buf.c
Function That Concatenates A Character To The Buffer Characters.

------------

### print_chr.c
Function That Writes The Character C To Stdout.
```c
/* Identifier : %c */
```

------------

### print_str.c
Function That Writes The String To Stdout.
```c
/* Identifier : %s */
```

------------

### print_int.c
Function That Prints An Integer.
```c
/* Identifier : %i or %d */
```

------------
### print_prg.c
Function That Prints "%".
```c
/* indentifier : %% */
```
------------
