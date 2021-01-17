#include <unistd.h>
#include <stdlib.h>
#include "shell_v2.h"
void mngcd(char *tkns_input[], char **env)
{
	char *home = NULL;
	(void)tkns_input;
	(void)env;

	home = getvrenv("HOME", env);

	chdir(home);
	home = NULL;
}

