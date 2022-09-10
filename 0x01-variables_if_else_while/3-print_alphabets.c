#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alp;

	alp = 'a';

	char ch;

	ch = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
	}
	while (ch <= 'Z')
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
