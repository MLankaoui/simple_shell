#include "main.h"

/**
* generate_prompt - Generates and handles the shell prompt.
* @buffer: Pointer to the buffer to store user input.
* @buffer_size: Pointer to the size of the input buffer.
*/
void generate_prompt(char **buffer, size_t *buffer_size)
{
	int nread;

	struct sigaction sa;
	sa.sa_handler = SIG_IGN;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGINT, &sa, NULL);

	nread = custom_getl__iiine(buffer, buffer_size, stdin);
	if (nread != -1)
	{
		sa.sa_handler = SIG_DFL;
		sigaction(SIGINT, &sa, NULL);
		(*buffer)[nread - 1] = '\0';
		is_command_available(*buffer);
	}
	else
	{
		exit(EXIT_SUCCESS);
	}
}
