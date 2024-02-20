#include "main.h"

/**
 * _str__lennn - Computes the length of a string.
 * @_str__ingg: The input string.
 *
 * Return: The length of the string.
 */
int _str__lennn(char *_str__ingg)
{
	const char *str;

	for (str = _str__ingg; *str; ++str)
		;
	return (str - _str__ingg);
}

/**
 * str_ch_r - Entry point
 * @st__r: input
 * @chr: input
 * Return: Always 0 (Success)
 */
char *str_ch_r(const char *st__r, int chr)
{
	while (*st__r != '\0')
	{
		if (*st__r == chr)
			return ((char *)st__r);
		st__r++;
	}
	return (NULL);
}

/**
 *   _str__cppyy - Copy a string
 *   @dst_t: Destination value
 *   @src: Source value
 *   Return: the pointer to destt
 */
char *_str__cppyy(char *dst_t, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dst_t[i] = src[i];
	}
	dst_t[i++] = '\0';
	return (dst_t);
}

/**
 *  _str_c_cat - Concatenates two strings
 *  @dst_t: The destination string
 *  @src: The source string
 *  Return: A pointer to the resulting string destt
 */

char *_str_c_cat(char *dst_t, char *src)

{
	int dest_t__len = 0, i;

	while (dst_t[dest_t__len])
	{
		dest_t__len++;
	}


	for (i = 0; src[i] != 0; i++)
	{
		dst_t[dest_t__len] = src[i];
		dest_t__len++;
	}

	dst_t[dest_t__len] = '\0';
	return (dst_t);
}

/**
 * strc__spn - Entry point
 * @s: input
 * @acc__ept_chars: input
 * Return: Always 0 (Success)
 */
unsigned int strc__spn(char *s, char *acc__ept_chars)
{
	unsigned int value = 0;
	char *ptr;

	while (*s)
	{
		ptr = acc__ept_chars;
		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (value);
			}
			ptr++;
		}
		s++;
		value++;
	}

	return (value);
}
