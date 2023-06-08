#include "main.h"

int _strlen(char *s);
int _palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int sum = 0;

	if (*(s + sum))
	{
		sum++;
		sum = sum + _strlen(s + sum);
	}
	return (sum);
}

/**
 * _palindrome - Checks if a string is a palindrome.
 * @s: The string to be evaluated.
 * @sum: The length of s.
 * @index: The index of the string to b evaluated.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int _palindrome(char *s, int sum, int index)
{
	if (s[index] == s[sum / 2])
		return (1);

	if (s[index] == s[sum - index - 1])
		return (_palindrome(s, sum, index + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int index = 0;
	int sum = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, sum, index));
}
