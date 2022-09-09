# include <stdio.h>

/**
 * main -Entry point
 *
 * Returns: 0 always (success)
 */

int main(void)

{
	char c;

	int i;

	long ii;

	long long iii;

	float f;

	printf("size of a char: %d byte(s)\n", sizeof(c));

	printf("size of an int: %d byte(s)\n", sizeof(i));

	printf("size of a long int: %d byte(s)\n", sizeof(ii));

	printf("size of a long long int: %d byte(s)\n", sizeof(iii));

	printf("size of a float: %d byte(s)\n", sizeof(f));

	return (0);
}
