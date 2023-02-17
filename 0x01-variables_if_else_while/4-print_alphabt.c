#include <stdio.h>
/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	/* your code goes there */
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
	}
	putchar('\n');
	return (0);
}
