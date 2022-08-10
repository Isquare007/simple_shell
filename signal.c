#include "shell.h"

/**
  * handle_signal - it keeps track in interactive mode
  * @m: the signal number
  * Return: NULL
  */

void handle_signal(int m)
{
	(void)m;

	write(STDERR_FILENO, "\n", 1);
	write(STDERR_FILENO, "$ ", 2);
}
