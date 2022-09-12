#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 always (success)
 *
 */

int main(void)

{
	int x;

	for (x = 48; x <= 57; x++)

	{
		putchar(x);
	}

	if (x != 57)

		continue;

	{
		putchar(',');

		putchar(' ');
	}

	{
		putchar('\n');
	}

return (0);

}
