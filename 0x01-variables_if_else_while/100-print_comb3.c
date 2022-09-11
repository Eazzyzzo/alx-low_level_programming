#include <stdio.h>

#include <stdlib.h>

/**
 * main -Entry point
 *
 * Return: 0 always (success)
 *
 */

int main()

{
	int n1 = 0, n2;

	while (n1 <= 9)

	{
		if (n1 != n2 && n1 < n2)

		{
			putchar(n1 + 48);
		
			putchar(n2 + 48);
		}

		if (n1 +n2 != 17)

		{
			putchar(',');

			putchar(' ');

		}



	
	}
	


}

