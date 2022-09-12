# include <stdio.h>

/**
 * main -Entry point
 *
 * Return: 0 always (success)
 *
 */

int main(void)

{
	int n;

	for (n = 0; n < 790; n++)

	{
		{
			putchar((n / 10) + '0');

			putchar((n % 10) + '0');

			putchar((n % 100) + '0');

			if (n != 790)

			{
				putchar(',');

				putchar(' ');
			}
		}
	}
return (0);

}
