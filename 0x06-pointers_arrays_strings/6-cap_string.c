#include "main.h"

/**
* cap_string - Capitalizes all words of a string.
* @str: The string to be capitalized.
*
* Return: A pointer to the changed string.
*/

char *cap_string(char *str)
{
	int may = 0;

	while (str[may])

	{

	while (!(str[may] >= 'a' && str[may] <= 'z'))
	may++;

	if (str[may - 1] == ' ' ||
	str[may - 1] == '\t' ||
	str[may - 1] == '\n' ||
	str[may - 1] == ',' ||
	str[may - 1] == ';' ||
	str[may - 1] == '.' ||
	str[may - 1] == '!' ||
	str[may - 1] == '?' ||
	str[may - 1] == '"' ||
	str[may - 1] == '(' ||
	str[may - 1] == ')' ||
	str[may - 1] == '{' ||
	str[may - 1] == '}' ||
	may == 0)
	str[may] -= 32;

	may++;
	}

	return (str);
}

