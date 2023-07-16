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
printf("%i", g);
if (g < 9)
printf(",");
printf(" ");
}

printf("\n");

return (0);
}
