#include "main.h"
/**
*_isalpha - check for lower case letter
*@c : character to check
*Return:0or1 
*/
int _isalpha(int c);
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
