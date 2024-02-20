#include "main.h"

/**
 * exe__cutee_co__mm__and - Execute a command.
 * @args: Array of command and arguments.
 * Return: Exit status of the executed command.
 */
int exe__cutee_co__mm__and(char **args)
{

	pid_t child_pID;
	int p_Result;

	child_pID = fork();

	if (child_pID == -1)
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	}
	else if (child_pID == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("execvp failed");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (waitpid(child_pID, &p_Result, 0) == -1)
		{
			perror("waitpid failed");
			exit(EXIT_FAILURE);
		}
		if (WIFEXITED(p_Result))
			return (WEXITSTATUS(p_Result));
	else
		exit(EXIT_SUCCESS);
	}

	return (0);
}
