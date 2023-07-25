#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
	int w, e, r, len, t, digit;

	w = 0;
	e = 0;
	r = 0;
	len = 0;
	t = 0;
	digit = 0;

while (s[len] != '\0')
len++;

while (w < len && t == 0)
{
if (s[w] == '-')
++e;

if (s[w] >= '0' && s[w] <= '9')
{
digit = s[w] - '0';
if (e % 2)
digit = -digit;
r = r * 10 + digit;
t = 1;

if (s[w + 1] < '0' || s[w + 1] > '9')
break;
t = 0;
}
w++;
}

	if (t == 0)

	return (0);

	return (r);

 }
