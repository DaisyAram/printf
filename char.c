#include "main.h"

/**
 * write_char - prints a char
 * @list: list of arguments
 * @buffer: storage for data memory
 * @width: width
 * @flags: calculates the number of flags
 * @precision:precision modifier
 * @length:lenth modifier
 * Return: chars printed excluding null byte
 */
int print_char(va_list list, char buffer[],int flags,int size, int precision, int length)
{
	char c = va_arg(list, int);
	return (write_char(c, buffer, flags, size, precision, length));
}
