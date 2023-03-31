#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: string address
 */

char *cap_string(char *s)
{

	int d = 0, b;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + d))
	{
		if (*(s + d) >= 'a' && *(s + d) <= 'z')
		{
			if (d == 0)
				*(s + d) -= 'a' - 'A';
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (a[b] == *(s + d - 1))
						*(s + d) -= 'a' - 'A';
				}
			}
		}
		d++;
	}
	return (s);
}
