#include <stdio.h>
/**
* main - start point coding is fun now
* Return: 0 always for the sake of erick
*/

int main(void)
{
int g;

for (g = 0; g < 10; g++)

{
putchar(g + '0');
if (g < 9)

{
putchar(',');
putchar(' ');
}

}

putchar('\n');

return (0);
}
