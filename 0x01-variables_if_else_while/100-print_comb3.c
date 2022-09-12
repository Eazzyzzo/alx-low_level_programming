#include <stdio.h>

#include <stdlib.h>

#include <time.h>
/**
 * main -Entry point
 *
 * Return: 0 always (success)
 *
 */

int main(void)

{
	int n;

	for (n = 0; n < 90; n++)

	{

		{
			putchar((n / 10) + '0');

			putchar((n % 10) + '0');


			if (n != 89)

			{
				putchar(',');

				putchar(' ');
			}

		}


	}


	putchar('\n');


return (0);
}
