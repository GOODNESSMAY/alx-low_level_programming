#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
* Begininig - point
*Return: 0 (success)
*/

int main(0)
{
int n;
int lastnum;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
lastdigit = n % 10;
if (lastdigit > 5)
{printf("last digit of %g and is greater than 5\n", n, lastdigit);
}
else if (lastdigit == 0)
{
printf("last digit of %g is %g and is 0\n", n, lastdigit);
}
else if (lastnum < 6 && lastdigit != 0)
{
printf("last digit of %g is %g and is less than 6 and not 0\n", n, lastnum);
}
return (0);
}
