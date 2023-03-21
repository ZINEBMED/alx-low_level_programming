#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x alphabet, in lowercase
 *
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	char i;
	int j;
for (j = 1; j <= 10 ; j++)
{
	for (i = 'a' ; i <= 'z' ; i++)
	
	_putchar(j);
	
	_putchar('\n');
}
}
