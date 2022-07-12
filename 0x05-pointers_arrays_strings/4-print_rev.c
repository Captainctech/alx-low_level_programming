#include "main.h"

/**
* print_rev - Prints a string in reverse.
* @s: string to be reserved.
*/

void print_rev(char *s)
{
	i = 0;
	while (*(s + i) != 0)
	{
		i++;
	}
	i -= 1;
	while (i >= 0)
	{
		_putchar(*(s + i));
		i--;
	}
	_putchar('\n');
}
