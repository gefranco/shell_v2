#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int exec_cmd(char *tknz_cmd[], char **env)
{
	pid_t pid;
	int status;

	pid = fork();
	if (!pid)
	{
		if (execve(tknz_cmd[0], tknz_cmd, env) == -1)
			return (-1);
		else
			return (0);

	}
	else
	{
		pid = wait(&status);
	}

	return (0);
}
