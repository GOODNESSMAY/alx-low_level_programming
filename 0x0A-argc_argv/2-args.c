#include <stdio.h>
#include "main.h"

/**
* main - to print in reverse all arguments
* @argc: number
* @argv: array
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
int q;
for (q = 0; q < argc; q++)
{
printf("%s\n", argv[q]);

}

return (0);

}

