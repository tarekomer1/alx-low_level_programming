#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char m;

	/* your code goes there */
	for (n = 0 ; n < 10 ; n++)
	{
		m = n + '0';
		putchar(m);
	}
	putchar('\n');
	return (0);
}
