#include <stdio.h>

#include "main.h"


/**
* main - print the number of arguments of this program
* @argc: number
* @argv: array
*
* Return: 0 (Success)
*/

int main(int argc, char *argv[])

{

(void) argv; /*Ignore the argv sha*/

printf("%d\n", argc - 1);

return (0);

}
