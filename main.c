#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>
#include "shell_v2.h"
int main(int argc, char *argv[], char **env)
{
	char *input = NULL;
	char *tkns_input[100];
	struct stat st;
	int total_nf = 1;
	int res;
	(void)argc;
	(void)argv;
	while ((res = read_input(&input)) > 0)
	{
		tokenize_input(input, tkns_input);
		if (_strcmp(tkns_input[0], "exit") == 0)
		{
			free(input);
			exit(0);
		}
		if (_strcmp(tkns_input[0], "env") == 0 || _strcmp(tkns_input[0], "cd") == 0)
		{
			mnginput(tkns_input, env);
			free(input);
			continue;
		}
		if (stat(tkns_input[0], &st) == -1)
		{
			if (errno == 2)
			{
				fprintf(stderr, "hsh: %d: %s: not found\n",
					total_nf, tkns_input[0]);
				free(input);
				total_nf++;
				continue;
			}
		}
		exec_cmd(tkns_input, env);
		free(input);
	}
		free(input);
	return (0);
}
