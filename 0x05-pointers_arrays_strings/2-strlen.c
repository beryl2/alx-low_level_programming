#include "main.h"

/**
 * _strlen - get character string
 *
 * @s: character to getstring
 *
 * Return : return length
 *
 * s1 is the var name for stringlenth
 */
int _strlen(char *s)
{
	int s1;

	for (s1 = 0; s[s1] != '\0'; s1++)
	{}
	return (s1);
}
