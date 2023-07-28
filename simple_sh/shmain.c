#include "main.h"


extern char **environ;

int main(int argc, char **argv)
{
    char **args = NULL;
    char **envp = environ;
    size_t lin_size = 0, len = 0;
    char *lin = NULL;
    ssize_t num_read = 0;
    char *path = my_getvar("PATH");
    char **dir = pathtok(path);
    int int_mode = isatty(STDIN_FILENO);
    (void)argv;
    (void)argc;

   
    if (int_mode)
    {
	    while (1)
	    {
		    _puwl(":) ");
		    fflush(stdout);
		    
		    num_read = getline(&lin, &lin_size, stdin);
		    if (_strcmp(lin, "exit\n") == 0 || num_read == -1)
		    {
			    free(lin);
			    exit(0);
		    }
		    
		    len = _strlen(lin);
		    if (lin[len - 1] == '\n')
		    {
			    lin[num_read - 1] = '\0';
		    }
		    
		    args = lintok(lin, num_read);
		    free(lin);
		    if (_strcmp(args[0], "exit") == 0 || args[0] == NULL)
		    {
			    exit(1);
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

    }

    else
    {
	    while ((num_read = getline(&lin, &lin_size, stdin)) != -1)
	    {
		    len = _strlen(lin);
		    if (lin[len - 1] == '\n')
		    {
			    lin[num_read - 1] = '\0';
		    }
	    }

	    args = lintok(lin, num_read);
	    free(lin);
	    if (_strcmp(args[0], "exit") == 0 || args[0] == NULL)
	    {
		    exit(0);
	    }
	    runcmd(args, envp, dir);
    
    }
    return (0);
}
