#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alp;

	char ch;

	alp = 'a';

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
