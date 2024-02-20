#include "main.h"

/**
 * checks_co_mmand_availability - Checks if a command is available.
 * @cmd: The command to check.
 */
void checks_co_mmand_availability(char *cmd)
{

	char complete_path[256];

	struct stat st;

	snprintf(complete_path, sizeof(complete_path), "/bin/%s", cmd);
	if (stat(complete_path, &st) == 0)
	{
		parse_handle_input(cmd);
	}
}
