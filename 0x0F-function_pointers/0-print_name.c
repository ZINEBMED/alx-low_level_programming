#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - function that print the name
 * @name: name to be print
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
