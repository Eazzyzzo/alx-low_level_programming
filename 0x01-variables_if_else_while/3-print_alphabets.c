#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 always (success)
 *
 */

int main(void)

{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	{
		putchar(alpha);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)

	{
		putchar(alpha);
	}
	
	{
		putchar('\n');
	}
}

return (0);
