#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - program that generates random valid
* passwords for the program 101-crackme
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int pass[100];
	int v, sum, l;

	sum = 0;

	srand(time(NULL));

	for (v = 0; v < 100; v++)
	{
	pass[v] = rand() % 78;

	sum += (pass[v] + '0');

	putchar(pass[v] + '0');

	if ((2772 - sum) - '0' < 78)

	{

	l = 2772 - sum - '0';

	sum += l;

	putchar(l + '0');

	break;
	}
	}

	return (0);

}
