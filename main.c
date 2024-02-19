#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char *buff_err = NULL;

	size_t buff_size = 0;
	int infinite = 1;

	while (infinite)
	{
		generate_prompt(&buff_err, &buff_size);
	}
	free(buff_err);
	return (0);
}
