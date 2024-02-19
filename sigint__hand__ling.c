#include "main.h"

/**
* siginthandl__ing - Signal handler for SIGINT.
* @signum: The signal number.
* @bufff_eerr: Pointer to the buffer to be freed.
*/
void siginthandl__ing(int signum, char *bufff_eerr)
{
	(void)signum;
	printf("\n");
	free(bufff_eerr);
	exit(EXIT_SUCCESS);
}
