#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * print all numbers from 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j < 15; j++)
	{
	if (j >= 10)
	{
	_putchar('0' + j / 10);
	}
	_putchar('0' + j % 10);
	}
	_putchar('\n');
	}
}
