#include "main.h"
#include <stdlib.h>

/**
  *_strdup - returns a pointer to a newwly allocated string in memory
  *
  *@str: string
  *
  *Return: pointer to memory
  *
  */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	if (str == NULL)
		return (NULL);

	for ( len = 0; str[len] != '\0'; i++)

	nstr = (char *)malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		nstr[i] = str[i];

	return (nstr);
}
