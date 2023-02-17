#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* your code goes there */
	for (n = 48 ; n < 58 ; n++)
	{
		putchar(n);
	}
	for (n = 97 ; n < 103 ; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
