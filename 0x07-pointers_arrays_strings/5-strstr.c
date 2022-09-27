#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurence of a substring
 * needle in the string haystack
 * @haystack: entire string
 * @needle: substring
 * Return: pointer to the begining of located substring or
 * Null if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;
		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
