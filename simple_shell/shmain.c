#include "main.h"


extern char **environ;

int main(int argc, char **argv)
{
    char **args = NULL;
    char **envp = environ;
    size_t lin_size = 0, len;
    char *lin = NULL;
    ssize_t num_read;
    char *path = my_getvar("PATH");
    char **dir = pathtok(path);
   
    (void)argv;

    args = malloc(sizeof(char *) * (argc));
    if (args == NULL)
    {
        perror("Malloc failed");
        exit(1);
    }

    while (1)
    {
        _puwl(":) ");
        fflush(stdout);

        num_read = getline(&lin, &lin_size, stdin);
        if (_strcmp(lin, "exit\n") == 0 || num_read == -1)
        {
            exit(0);
        }

        len = _strlen(lin);
        if (lin[len - 1] == '\n')
        {
            lin[num_read - 1] = '\0';
        }

        args = lintok(lin, num_read);

	if (_strcmp(args[0], "exit") == 0 || args[0] == NULL)
	{
		exit(1);
	}

	else if (_strcmp(args[0], "setenv") == 0)
	{
		if (args[1] == NULL || args[2] == NULL)
		{
			perror("Error: Setenv failed");
			exit(1);
		}
		else
		{
			set_var(args[1], args[2]);
			exit(0);
		}
	}

	else if (_strcmp(args[0], "unsetenv") == 0)
	{
		if (args[1] == NULL)
		{

			perror("Error: unsetenv failed");
		}
		else
		{
			uset_var(args[1]);
		}
	}

	else if (_strcmp(args[0], "env") == 0)
	{
		while (*envp != NULL)
		{
			_puts(*envp);
			envp++;
		}
	}

	else
	{
		runcmd(args, envp, dir);
	}
    }
    free_t(args);
    free_t(dir);
    free(lin);
    return (0);
}
