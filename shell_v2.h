#ifndef SHELL_V2
#define SHELL_V2
int exec_cmd(char *argv[], char **env);
int read_input(char **buf);
void tokenize_input(char *input, char *tkns[]);
int _strcmp(char *s1, const char *s2);
int ptrenv(char **environ);
void mngcd(char *tkns_input[], char **env);
int _strlen(char *s);
char *getvrenv(const char *name, char **environ);
void mnginput(char *tkns[], char **env);
#endif
