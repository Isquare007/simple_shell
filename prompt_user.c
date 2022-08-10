#include "shelll.h"

/**
  * prompt_user - prints $ to prompt user to enter input
  * prints the prompt if the shell is in interative mode
  */
void prompt_user(void)
{
	if ((isatty(STDIN_FILENO) == 1) && (isatty(STDOUT_FILENO) == 1))
		flags.interactive = 1;
	if (flags.interactive)
		write(STDERR_FILENO, "$ ", 2);
}
