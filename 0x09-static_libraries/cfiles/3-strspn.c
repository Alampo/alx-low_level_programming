#include "main.h"

/**
  *_strspn - gets the length of a prefix substring
  *
  *@s: substring
  *@accept: accepted bytes
  *
  *Return: number of accepted bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, boo1;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		boo1 = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				boo1 = 0;
				break;
			}
		}
		if (boo1 == 1)
			break;
	}
	return (i);
}
