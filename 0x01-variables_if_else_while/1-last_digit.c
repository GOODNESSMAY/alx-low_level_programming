#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
*main - Begininig - point
*Return: 0 (success)
*/

int main(void)
{
int n;
int g;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
g = n % 10;
if (g > 5)
printf("last digit of %d is %d and is greater than 5\n", n, g);
if (g == 0)

printf("last digit of %d is %d and is 0\n", n, g);

if (g < 6 && g != 0)

printf("last digit of %d is %d and is less than 6 and not 0\n", n, g);

return (0);
}
