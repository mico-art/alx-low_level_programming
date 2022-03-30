/*
 * File: 5-strstr.c
 */

#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle: The substring to be located.
 *
 * Return: If the substring is located - a pointer to the beginning
 *                                       of the located substring.
 *         If the substring is not located - NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
{

		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
{
			one++;
			two++;
}

		if (*two == '\0')
			return (haystack);
}

	return (NULL);
}
