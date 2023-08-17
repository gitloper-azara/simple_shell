#ifndef _SIMPLE_SHELL_
#define _SIMPLE_SHELL_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAX_INPUT_LENGTH 1024


/* error_helper functions */
void command_error(const char *cmd);
void fork_error(void);

char *_strchr(const char *s, int c);

#endif /* _SIMPLE_SHELL_ */
