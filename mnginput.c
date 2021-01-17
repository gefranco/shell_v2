#include "shell_v2.h"
void mnginput(char *tkns[], char **env)
{
	if (_strcmp(tkns[0], "env") == 0)
		ptrenv(env);
	if (_strcmp(tkns[0], "cd") == 0)
		mngcd(tkns, env);
}
