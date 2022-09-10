#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
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
		alp++;
	}
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;		
	}
	putchar('\n');
	return (0);
}
