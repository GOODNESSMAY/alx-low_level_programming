#include <stdlib.h>
#include "main.h"
/**
* count_word - count the number of words in string
* @s: string to be used
*
* Return: number of words
*/

int count_word(char *s)

{

int flag, j, m;
	flag = 0;
	m = 0;
	for (j = 0; s[j] != '\0'; j++)

	{
	if (s[j] == ' ')
	flag = 0;

	else if (flag == 0)
	{
	flag = 1;
	m++;
	}
	}
	return (m);
	}
/**
* **strtow - splits a string variable
* @str: string to be used for spliting
*
* Return: pointer array of strings (Success)
* or NULL (Error)
*/

char **strtow(char *str)

{

	char **matrix, *tmp;

	int q, t = 0, len = 0, words, u = 0, start, end;

	while (*(str + len))
	len++;
	words = count_word(str);
	if (words == 0)
	return (NULL);
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	return (NULL);
	for (q = 0; q <= len; q++)
	{
	if (str[q] == ' ' || str[q] == '\0')
	{
	if (u)
	{
	end = q;
	tmp = (char *) malloc(sizeof(char) * (u + 1));
	if (tmp == NULL)
	return (NULL);
	while (start < end)
	*tmp++ = str[start++];
	*tmp = '\0';
	matrix[t] = tmp - u;
	t++;
	u = 0;
	}
	}
	else if (u++ == 0)
	start = q;
	}
	matrix[t] = NULL;
	return (matrix);

}

