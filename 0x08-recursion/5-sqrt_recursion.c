#include "main.h"


int actual_sqrt_recursion(int n, int l);


/**
* _sqrt_recursion - functions that returns the natural square root of a number
* @n: number square root
*
* Return: the result of the square root
*/

int _sqrt_recursion(int n)

{

if (n < 0)

return (-1);

return (actual_sqrt_recursion(n, 0));

}

/**
* actual_sqrt_recursion - recurses to find the natural
* square root of a number
* @n: number of sqaure root
* @l: iterator of square root
*
* Return: the result of the square root
*/

int actual_sqrt_recursion(int n, int l)

{

if (l * l > n)

return (-1);

if (l * l == n)

return (l);
return (actual_sqrt_recursion(n, l + 1));
}
