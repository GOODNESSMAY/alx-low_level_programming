#include "main.h"

/**
*  _isdigit - check if a character is a digit
* @e: the number to be checked
* return: 1 for a character that will be a digit or 0 for anything
*/

int _isdigit(int e)

{
	if (e >= 48 && e <= 57)
	{
	return (1);
	}
	return (0);
}
