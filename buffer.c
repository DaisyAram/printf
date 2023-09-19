#include "main.h"

void print_buffer(const char *format,...)
{
	va_list args;

	int a = 0; /** loops through the format string */
	int b = 0; /** loops through a buffer */
	char buffer[BUFF_SIZE];
	int s = 0;
	int i = 0;

	va_start(args, format);
	while (format && format[a])
	{
	if (format[a] == '%')
	{
	a++; /** move to the next character */
	switch(format[a]) /**check the kind of specifier */
	{
	case 'c':/** if its a char */
	buffer[b] = va_arg(args, int);/** get the next argument as an int and store it in a buffer */
	b++; /** move to the next position in the buffer */
	case 's':/** if its a string */
	{
	buffer[b] = 's';/** copy each character from the string into the buffer */
	b++; /** move to next position in the buffer */
	s++; /** move to next char in the string */
	}
	break;
	case 'i': /** if it is an integer */
	i = va_arg(args, int);/** get the arg and store in integer */
	sprintf(buffer + b, "%i", i);/** convert i to a string and append it to the buffer using sprintf */
	while(buffer[b]) /** loop through the buffer until NULL */
	{
	b++;
	}
	break;
	}
	}
	else
	{
	buffer[b] = format[a];
	b++;}
	{
	a++;
	}
	va_end(args);
	printf( "%s", buffer);
	}
}
