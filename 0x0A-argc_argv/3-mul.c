#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the multiplication of two numbers
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: 0 on success, -1 on error
 */
int main(int argc, char *argv[])
{
	int x, y;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	printf("Error\n");
	return (1);
}
