#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: an array of pointers to the arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);
	return (0);
}
