#include "main.h"
/**
* _strstr - starting here
* @haystack: input variable goodness
* @needle: input variable goodness
* Return: 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
	char *s = haystack;
	char *v = needle;

	while (*s == *v && *v != '\0')
	{
	s++;
	v++;
	}

	if (*v == '\0')
	return (haystack);
	}
	return (0);
}
