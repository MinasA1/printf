# _printf()
Printf project for Holberton School to create a simple replication of `printf()` in C. 

## File Descriptions
- [holberton.h](holberton.h) - header file including prototypes and libraries used.   
- [functions.c](functions.c) - include functions to print strings, chars, and function to check for specifiers.
  `_putstring()` - prints a string
  `_putchar()` - prints a char
  `_checktype()` - checks and matches a conversion specifier with its corresponding function  

- [print_fcns.c](print_fcns.c) - helper fucntions to print according to type/conversion specifier and returns characters printed
  `pc()` - prints a char
  `ps()` - prints a string
  `pp()` - prints a '%' character
  `pd()` - prints a decimal
  `pi()` - prints an integer  

- [_printf](_printf) - function with basic functionalities `printf()` that checks each argument for conversion specifiers, prints accordingly, and return characters printed

## Usage
`_printf()` takes in variable arguments and looks for their corresponding functions(if exists). If an argument does not match any specifiers, `_printf()` will simply print the argument the way it was received. 

## Example
To print the string "Hello, World!":

#include "holberton.h"
_printf("%d\\n", string);

## Authors
Minas Anton - [Github](https://github.com/MinasA1)  
Jennifer Huang - [Github](https://github.com/jhuang10123)