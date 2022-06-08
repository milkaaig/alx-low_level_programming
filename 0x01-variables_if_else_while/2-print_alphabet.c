#include <stdio.h>

/**
 *main - Entry point
 *Return: Returns 0
 */
int main(void)
{
	char alphabet, newline;

	alphabet = 'a';
	newline = '\n';
	while (alphabet <= 'z')
	{
		putchar (alphabet);
		alphabet++;
	}
	putchar (newline);

	return (0);
}
