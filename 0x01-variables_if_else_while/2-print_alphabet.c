#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (suceess)
 */
int main(void)
{
	char alp;

	alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}
