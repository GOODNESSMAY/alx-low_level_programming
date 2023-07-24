#include"main.h"

/**
* swap_int - swaps the value of two integers.
* @a: the first integer to be swapped.
* @b: the second integar to be swapped.
* return: 0
* funtion that swaps integers
*/

void swap_int(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;

}
