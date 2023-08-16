#include <stdio.h>
#include <stdlib.h>

/**
* main - prints opcodes
* @argc: number of arg
* @argv: array of arg
*
* Return: nothing (Success)
*/

int main(int argc, char *argv[])
{
	int bytes, z;
	char *myg;

	if (argc != 2)
	{
	printf("Error\n");
	exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	myg = (char *)main;

	for (z = 0; z < bytes; z++)
	{
	if (z == bytes - 1)
	{
	printf("%02hhx\n", myg[z]);
	break;
	}
	printf("%02hhx ", myg[z]);
	}
	return (0);
	}
