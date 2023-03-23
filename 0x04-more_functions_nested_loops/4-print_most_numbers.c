#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 * print all numbers from 0 to 9 and escape 2 and 4
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char alpha = '0';

	while (alpha <= '9')
	{
		if (alpha != '2' && alpha != '4')
		{
			putchar(alpha);
		}
		alpha++;
	}
		putchar('\n');
}
