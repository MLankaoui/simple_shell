#include "main.h"

/**
 * parseHandle_input - Parses and handles input.
 * @buff_err: The input buffer containing the command and arguments.
 */
void pa_rseHandle_input(char *buff_err)
{

	char *args[MAX_ARGS], *token;

	int argc = 0;

	for (token = strtok(buff_err, " \t\n"); token != NULL && argc < MAX_ARGS - 1; token = strtok(NULL, " \t\n"))
	{
		args[argc++] = token;
	}

	args[argc] = NULL;
	exec_cmd(args);
}
