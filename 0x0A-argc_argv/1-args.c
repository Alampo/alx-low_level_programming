#include "stdio.h"

/**
  *main - prints the number of arguments
  *
  *@argc: number of command line arguments
  *@argv: array that contains command line arguments
  *
  *Return: 0 (success)
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
