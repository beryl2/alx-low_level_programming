#include "main.h"

/**
 * _strlen - get character string
 *
 * @s: character to getstring
 *
 * Return: return length
 *
 * s1 is the var name for stringlenth
 */
int _strlen(char *s)
{
	int sl;

	for (sl = 0; s[sl] != '\0'; sl++)
	{}
	return (sl);
}
