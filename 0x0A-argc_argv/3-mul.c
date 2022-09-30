#include <stdio.h>

/**
  *main - returns multiplication of two numbers
  *
  *@argc: number of command line arguments
  *@argv: sn array that contains all command line arguments
  *
  *Return: 1 if an error, 0 if successfull
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
