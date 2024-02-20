#include "main.h"

/**
* pa_rseHandle_input - Parses and handles input.
* @buff_err: The input buffer containing the command and arguments.
*/
void pa_rseHandle_input(char *buff_err)
{

	char *args[MAX_ARGS], *tokkeee__nnn;

	int index = 0;

	tokkeee__nnn = strtok(buff_err, " \t\n");
	for (tokkeee__nnn != NULL && index < MAX_ARGS - 1)
	{
		args[index++] = tokkeee__nnn;
		tokkeee__nnn = strtok(NULL, " \t\n")
	}


	args[index] = NULL;
	exec_cmd(args);
}
