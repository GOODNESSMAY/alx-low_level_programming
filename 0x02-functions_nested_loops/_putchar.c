#include <unistd.h>

/**
* _putchar - writes c to stdout
* @: to print
* Return: 1 on success
* on error, -1 would be returned
*/

int _putchar(char c)
{
	return (write(1, &c, 1));

}
