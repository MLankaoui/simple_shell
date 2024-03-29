#include "main.h"

/**
* create_pro__mpt - Generates and handles the shell prompt.
* @buff_err: Pointer to the buffer to store user input.
* @buff_si_zee: Pointer to the size of the input buffer.
*/
void create_pro__mpt(char **buff_err, size_t *buff_si_zee)
{
	ssize_t num_read;

	struct sigaction sa;

	sa.sa_handler = SIG_IGN;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	sigaction(SIGINT, &sa, NULL);
	num_read = read_geet_linee(buff_err, buff_si_zee, stdin);

	if (num_read != -1)
	{
		sa.sa_handler = SIG_DFL;
		sigaction(SIGINT, &sa, NULL);


		if (num_read == 1 && isatty(STDIN_FILENO))
		{
			printf("\nEOF detected. Exiting shell.\n");
			free(buff_err);
			exit(EXIT_SUCCESS);
		}

		buff_err[num_read - 1] = '\0';
		pa_rseHandle_input(*buff_err);
	}
	else
		exit(EXIT_SUCCESS);
}
