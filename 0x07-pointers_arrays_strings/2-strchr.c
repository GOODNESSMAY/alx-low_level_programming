#include "main.h"
/**
 * _strchr - starting point
 * @s: input variable
 * @c: input variable
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0'; t++)

	{

	if (s[t] == c)

	return (&s[t]);
	}
	return (0);
}

