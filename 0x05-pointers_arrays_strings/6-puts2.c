#include"main.h"

/**
* puts2 - function should print only one character out of the two
* starting with the first one
* @str: input
* return: print
*/

void puts2(char *str)
{
int longi = 0;
int j = 0;
char *y = str;
int k;

while (*y != '\0')

{
y++;
longi++;
}

j = longi - 1;

for (k = 0; k <= j; k++)

{
if (k % 2 == 0)

{
_putchar(str[0]);

}
}
_putchar('\n');
}

