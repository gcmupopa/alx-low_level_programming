#include "main.h"

void runcmd(char **args, char **envp, char **dir)
{
	pid_t pid;
	int i, status;
	char cmd[100];
	char errmsg[100];

	if (access(args[0], X_OK) == 0)
                {
                        pid = fork();
                        if (pid == -1)
                        {
                                perror("fork failed");
                                exit(1);
                        }
                        else if (pid == 0)
                        {
                                free_t(args);
				execve(args[0], args, envp);
                                perror("execve failed");
                                exit(1);
                        }
                        else
                        {
                                waitpid(pid, &status, 0);
                                if (!(WIFEXITED(status) && WEXITSTATUS(status) == 0))
                                {
                                        exit(1);
                                }
                        }
			free_t(args);
                }
                else
                {
                        for (i = 0; dir[i] != NULL; i++)
                        {
                                _strcpy(cmd, dir[i]);
				
                                _strcat(cmd, "/");
                                _strcat(cmd, args[0]);
                                if (access(cmd, X_OK) == 0)
                                {
                                        pid = fork();
                                        if (pid == -1)
                                        {
                                                perror("fork failed");
                                                exit(1);
                                        }
                                        else if (pid == 0)
                                        {
                                            free_t(args);
					    free_t(dir);
					    execve(cmd, args, envp);
                                                perror("execve failed");
                                                exit(1);
                                        }
                                        else
                                        {
                                                waitpid(pid, &status, 0);
                                                if (!(WIFEXITED(status) && WEXITSTATUS(status) == 0))
                                                {
                                                        exit(1);
                                                }
                                        }
                                        break;
				}
			}
			if (dir[i] == NULL)
			{
				_strcpy(errmsg, "hsh: ");
				_strcat(errmsg, args[0]);
				_strcat(errmsg, ": command not found");
				_puts(errmsg);
			}
			free_t(args);
			free_t(dir);
		}
}
