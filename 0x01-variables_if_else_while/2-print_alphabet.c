#include <stdio.h>

/**
 *main - print lowercase a-z
 *Remain: Always 0 (Success)
 */

int main(void)

{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		:wq
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
