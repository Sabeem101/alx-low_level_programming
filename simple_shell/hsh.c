#include "shell.h"

/**
 * loc_bltin - find builtin command
 * @data: data structure
 *
 * Return: 1 if cmd found but not successful
 *		0 if cmd found and executed succesfully
 */
int loc_bltin(data_dt *data)
{
	int x, built_in_re = -1;
	bltin builtintbl[] = {
		{"exit", pexit},
		{"env", penv},
		{"help", phelp},
		{"histoy", phistory},
		{"setenv", psetenv},
		{"unseten", punsetenv},
		{NULL, NULL}
	};
	for (x = 0; builtintbl[x].type; x++)
		if (_strcmp(data->argv[0], builtintbl[x].type) == 0)
		{
			data->linec++;
			built_in_ret = builtintbl[x].func(data);
			break;
		}
	return (built_in_ret);
}
/**
 * hsh - main shell loop
 * @data: data
 * @av: argv
 *
 * Return: O on success, 1 on error
 */
int hsh(data_dt *data, char **av)
{
	ssize_t r = 0;
	int builtin_ret = 0;

	while (r != -1 && builtin_ret != -2)
	{
		clear_dt(data);
		if (interact(data))
			_puts("$ ");
		_putcharerr(BUFF);
		r = gets_in(data);
		if (r != -1)
		{
			set_dt(data, av);
			builtin_ret = loc_bltin(data);
			if (builtin_ret == -1)
				loc_cmd(data);
		}
		else if (interact(data))
			_putchar('\n');
		free_dt(data, 0);
	}
	wr_hist(data);
	free_dt(data, 1);
	if (!interact(data) && data->stats)
		exit(data->stats);
	if (builtin_ret == -2)
	{
		if (data->nerr == -1)
			exit(data->stats);
		exit(data->nerr);
	}
	return (builtin_ret);
}
