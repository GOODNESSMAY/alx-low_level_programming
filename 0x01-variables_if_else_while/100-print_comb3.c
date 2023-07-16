#include <stdio.h>
/**
* main - starting point i am printing a combo of some numbers
* Return: 0 at all times
*/
int main(void)
{
int twos = '0';
for (twos = '0'; twos <= '9'; twos++)
{
int tens = '0';
for (tens = '0'; tens <= '9'; tens++)

{
if (!((twos == tens) || (tens > twos)))
{
putchar(tens);
putchar(twos);
if (!(twos == '9' && tens == '8'))

{
putchar(',');
putchar(' ');

}
}
}
}
putchar('\n');
return (0);
}
