#include <stdio.h>

/**
 *main - Entry point
 *Return: Returns 0
 */
int main(void)
{
	char alphabet, newline;

	alphabet = 'z';
	newline = '\n';
	while (alphabet >= 'a')
	{
		putchar (alphabet);
		alphabet--;
	}
	putchar (newline);
	return (0);
}
