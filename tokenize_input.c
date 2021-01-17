#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "shell_v2.h"
void tokenize_input(char *input, char *tkns[])
{
	char *tk;
	int i;

	i = 0;
	tk = NULL;
	input[_strlen(input) - 1] = '\0';
	tk = strtok(input, " ");

	while (tk)
	{
		tkns[i] = tk;
		tk = strtok(NULL, " ");
		i++;
	}
	tkns[i] = NULL;
}
