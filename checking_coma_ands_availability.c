#include "main.h"

/**
 * checks_co_mmand_availability - Checks if a command is available.
 * @comma__and__s: The command to check.
 */
void checks_co_mmand_availability(char *comma__and__s)
{

	char complete_path[256];

	struct stat st;

	snprintf(complete_path, sizeof(complete_path), "/bin/%s", comma__and__s);
	if (stat(complete_path, &st) == 0)
		parse_handle_input(comma__and__s);
}
