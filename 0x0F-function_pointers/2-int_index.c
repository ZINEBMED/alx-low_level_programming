#include <stdio>
#include <stdlib>
#include "function_pointers.h"
/**
 * int_index - indexes array
 * @array: array to go through
 * @size: size of array
 * @cmp: function to do something with size
 * Return: int value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
	for (index = 0; index < size; index++)
	{
	if (cmp(array[index]) != 0)
	return (index);
}
}
	return (-1);
}
