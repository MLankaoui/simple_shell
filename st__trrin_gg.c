#include "main.h"

/**
* __str_cm_p - Compares two strings
* @s_1: The first string
* @s_2: The second string
*
* Return: int value
*/
int __str_cm_p(char *s_1, char *s_2)
{
	int i;

	for (i = 0; s_1[i] == s_2[i] && s_1[i]; i++)
		;

	if (s_1[i] > s_2[i])
		return (1);
	if (s_1[i] < s_2[i])
		return (-1);
	return (0);
}

/**
 * _my_strt_ooo_k - Finds the next token in a string.
 * @str: The string to search.
 * @dl: The delimiter characters.
 * Return:
 * - a pointer to the next token in the string, or
 * - NULL if no more tokens are found.
 */
char *_my_strt_ooo_k(char *str, const char *dl)
{
	static char *buff_f;

	char *run_token;

	if (str != NULL)
	buff_f = str;

	if (buff_f == NULL || *buff_f == '\0')
		return (NULL);

	while (*buff_f != '\0' && str_ch_r(dl, *buff_f) != NULL)
		buff_f++;

	run_token = buff_f;

	while (*buff_f != '\0' && str_ch_r(dl, *buff_f) == NULL)
		buff_f++;

	if (*buff_f == '\0')
		return (run_token);

	*buff_f = '\0';
	buff_f++;

	return (run_token);
}
