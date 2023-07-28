#include "main.h"
#include <stdio.h>

/**
* rot13 - encoder rot13
* @s: pointer to string params
*
* Return: *s
*/

char *rot13(char *s)
{
	int b;
	int t;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (b = 0; s[b] != '\0'; b++)
	{
	for (t = 0; t < 52; t++)
	{
	if (s[b] == data1[t])
	{
	s[b] = datarot[t];
	break;
	}
	}
	}

	return (s);
}

