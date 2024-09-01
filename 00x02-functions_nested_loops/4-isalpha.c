#include "main.h"

/**
* _isalpha -  checks for alphabetic  character.
* 
* return : 1 if the character is lowercase or uppercase
*          0 otherwise.
*/

int	_isalpha(int c)
{
	if ((((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z'))))
		return (1);
	else
		return (0);
}
