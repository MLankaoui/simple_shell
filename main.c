#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char *buf = NULL;

	size_t bufsize = 0;

	while (1)
	{
		create_pro__mpt(&buf, &bufsize);
	}
	return (0);
}
