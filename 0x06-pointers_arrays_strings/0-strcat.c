#include "main.h"

/**
  *_strcat - concatenates two strings
  *@dest: concatenated string
  *
  *@src: string 1
  *
  *Return: Concatenated dest string
  */
char *_strcat(char *dest, char *src)
{
	int destIndex = 0, src_len = 0, i;

	while (destIndex != '\0')
	{
		destIndex++;
	}
	while (src_len != '\0')
	{
		src_len++;
	}
	for (i = 0; i < src_len; i++)
	{
		dest[destIndex] = *src[i];
		destIndex++;
	}
		dest[destIndex] = '\0'
	return (dest);
}
