#include "main.h"

/**
* pa_rseHandle_input - Parses and handles input.
* @buff_err: The input buffer containing the command and arguments.
*/
void pa_rseHandle_input(char *buff_err)
{

	char *args[MAX_ARGS], *tokk__eee__nnn;

	int index;

	tokk__eee__nnn = strtok(buff_err, " \t\n");
	for (index = 0; tokk__eee__nnn != NULL && index < MAX_ARGS - 1;)
	{
		args[index++] = tokk__eee__nnn;
		tokk__eee__nnn = strtok(NULL, " \t\n");
	}


	args[index] = NULL;
	exe_cuute_comm__and(args);
}
