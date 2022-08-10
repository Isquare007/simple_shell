#include "shell.h"

/**
  * exit_cmd - handles the exit command
  * @command: tokenized command
  * @line: input read from STDIN
  * Return: NULL
  */
void exit_cmd(char **command, char *line)
{
	free(line);
	free_buffers(command);
	exit(0);
}
