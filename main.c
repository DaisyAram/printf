#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 Always
 */
int main(void)
{
	char c = 'b';
	char *s = "Our first printf task";
	int num1 = 30;
	int num2 = 45;

	_printf("This is %s\n", s);
	_printf("Alphabet: %c\n", c);
	_printf("Our first printf task\n");
	_printf("%%\n");
	_printf(" \n");
	_printf("My value is %d, %i\n", num1, num2);
}
