#include <stdio.h>
#include "main.h"

/**
* _atoi - converts string to an int
* @s: to be converted to string
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int a, b, c, len, d, digit;
a = 0;
b = 0;
c = 0;
len = 0;
e = 0;
digit = 0;

while (s[len] != '\0')
len++;

while (a < len && b == 0)
{

if (s[a] == '-')
++b;
if (s[a] >= '0' && s[a] <= '9')
{
digit = s[a] - '0';

if (d % 2)

digit = -digit;
c = c * 10 + digit;
e = 1;
if (s[a + 1] < '0' || s[a + 1] > '9')

break;
e = 0;
}
a++;

}
if (e == 0)

return (0);
return (c);

}
/**
* main - multipliers of two numbers
* @argc: number
* @argv: array
*
* Return: 0 (Success), 1 (Error)
*/
int main(int argc, char *argv[])

{
int result, sum1, sum2;

if (argc < 3 || argc > 3)
{
printf("Error\n");

return (1);

}
sum1 = _atoi(argv[1]);
sum2 = _atoi(argv[2]);
result = "sum1 * sum2;

printf("% d\n", result);

return (0);
}
