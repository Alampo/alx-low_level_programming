#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *str_concat - concatenates two strins
  *
  *@s1: string 1
  *@s2: string 2
  *
  *Return: concatenated string 1 and 2
  */
char *str_concat(char *s1, char *s2)
{
	char *nstr;
	unsigned int len1, len2, size, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		nstr[i] = s1[i];

	for (j = 0; i <= size; i++, j++)
		nstr[i] = s2[j];

	return (nstr);
}
