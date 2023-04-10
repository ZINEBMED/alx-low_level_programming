#include <stdio.h>
#include <stdlib.h> /* for atoi */

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: an array of pointers to the arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc < 2) /* no arguments passed */
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	int j, num = 0;

	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (argv[i][j] < '0' || argv[i][j] > '9')
	{
	printf("Error\n");
	return (1);
	}
	num = num * 10 + (argv[i][j] - '0');
	}
	sum += num;
	}

	printf("%d\n", sum);
	return (0);
}
