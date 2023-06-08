#include "main.h"

int _strlen(char *s);
int _palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * _strlen - Returns the length of a string.
 * @s: The string to be evaluated.
 * Return: The length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + _strlen(s + len);
	}
	return (len);
}

/**
 * _palindrome - Checks if a string is a palindrome.
 * @s: The string to be evaluated.
 * @len: The length of s.
 * @index: The index of the string to be evaluated.
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */

int _palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (_palindrome(s, len, index + 1));

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
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (_palindrome(s, len, index));
}
