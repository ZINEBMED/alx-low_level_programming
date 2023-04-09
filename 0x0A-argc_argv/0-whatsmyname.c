#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
	for (i = 0; argv[0][i] != '\0'; i++)
	{
	_putchar(argv[0][i]);
}
}	_putchar('\n');
	return (0);
	}
