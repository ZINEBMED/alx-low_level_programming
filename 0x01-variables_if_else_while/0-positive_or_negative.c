#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - point of entry
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("the number is positive", "%d\n");
}
if (n < 0)
{
printf("the number is negative", "%d\n");
}
if (n == 0)
{
printf("the number  is zero", "%d\n");
}
return (0);
}

