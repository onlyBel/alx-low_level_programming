#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program
 * @argc: arguments count
 * @argv: arguments
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc-1);
	return (0);
}
