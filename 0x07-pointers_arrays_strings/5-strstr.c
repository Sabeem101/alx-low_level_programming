#include "main.h"

/**
 * _strtsr - finds first occurrence of substring
 * @haystack: entire string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 *		NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0, y, z;

	if (*(needle) == '\0')
	{
		return (haystack);
	}

	while (*(haystack + x) != '\0')
	{
		if (*(haystack + x) == *(needle))
		{
			z = x, y = 0;
			while (*(needle + y) != '\0')
			{
				if (*(haystack + z) == *(needle + y))
					z++, y++;
				else
					break;
			}
			if (*(needle + y) == '\0')
			{
				return (haystack + x);
			}
		}
		x++;
	}
	return ('\0');
}
