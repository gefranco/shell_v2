#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "shell_v2.h"

/**
 * _getenv - Get Enviroment of the command.
 * @name: argument for tokanizade.
 * @environ: pointer to enviroment.
 * Return: return enviroment.
 */

char *getvrenv(const char *name, char **environ)
{
	unsigned int i;

	char *env = NULL;
	char *av = NULL;

	env = NULL;

	i = 0;
	while (environ[i])
	{
		av = strtok(environ[i], "=");
		if (_strcmp(av, name) == 0)
		{
			env = strtok(NULL, "=");
			return (env);
		}
		i++;
		/*free(tmp);*/
	}

	return (env);


}
