#include "main.h"


int check_pal(char *s, int k, int len);

int _strlen_recursion(char *s);


/**
* is_palindrome - palindrome
* @s: reverse the string
*
* Return: 1 if it is, 0 it's not
*/

int is_palindrome(char *s)

{

if (*s == 0)

return (1);

return (check_pal(s, 0, _strlen_recursion(s)));

}

/**
* _strlen_recursion - return length of a string
* @s: calculate the length of string
*
* Return: length of the string
*/

int _strlen_recursion(char *s)

{
if (*s == '\0')

return (0);

return (1 + _strlen_recursion(s + 1));

}

/**
* check_pal- functions that returns string of palindrome
* @s: string
* @k: iterator
* @len: length
*
* Return: 1 if palindrome, 0 if not
*/

int check_pal(char *s, int k, int len)

{

if (*(s + k) != *(s + len - 1))

return (0);

if (k >= len)

return (1);

return (check_pal(s, k + 1, len - 1));

}


