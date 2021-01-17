#include <stdio.h>
int read_input(char **buf)
{
	size_t max = 0;

	return (getline(buf, &max, stdin));
}
