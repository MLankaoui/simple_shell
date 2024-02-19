#include "main.h"

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char *err_buffer = NULL;

	size_t buff_f_si_ze = 0;
	int is_run = 1;

	while (is_run)
	{
		create_prompt(&err_buffer, &buff_f_si_ze);
	}
	free(err_buffer);
	return (0);
}
