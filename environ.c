<<<<<<< HEAD
#include "simple_shell.h"
/**
*_myenv - A function printing the current environment
*@info: the structure that contains the args
*Return: Always 0 (success)
*/
int _myenv(info_t *info)
{
print_list_str(info->env);
return (0);
}
/**
*_getenv - A function that gets the env var
*@info: a struct with the args
*name: the variable name
*Return: the var value
*/
int *_getenv(info_t *info, char *name)
list_t *node = info->envi;
char *s;
while (node)
{
s = starts_with(node->str, name);
if (s)
return (s);
else if (*s)
return (s);
node = node->link;
}
return (NULL);
/**
*_mysetenv - A function that modify and initialise an enviromental var
*@info: the potential args 
*Return: Always 0 (Success)
*/
int _mysetenv(info_t *info)
if (info->argc != 1)
{
_oputs("invalid args\n");
return (1);./.
}
if (_setenv(info, info->argv[1], info->argv[1]))
return (0);
return (1);
}
/**
*_unsetenv - A function that removes the env var
*@info: the struct containing args
*Return: Always 0 (Success)
*/
int _unsetenv(info_t *info)
int i;
if (info->argc == 1)
{
_oputs("Need two arguments\n")
return (1);
}
for (i = 0; i <= info->argc; i++)
_unsetenv(info, info->argv[i]);
return (0);
}
/**
*populate_new_list - A function that adds to the linked list
* @info: the struct with the args
*Return: Always 0 (Success)
*/ 
populate_new_list(info_t *Info)
list_t *node = NULL;
size_t i;
for (i = 0; environ[i]; i++)
add_node_end(&node, environ[i])
info->env = node
return (0);
}

=======
#include "shell.h"

/**
 * _myenv - prints the current environment
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
int _myenv(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * _getenv - gets the value of an environ variable
 * @info: Structure containing potential arguments. Used to maintain
 * @name: env var name
 *
 * Return: the value
 */
char *_getenv(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

/**
 * _mysetenv - Initialize a new environment variable,
 *             or modify an existing one
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: Always 0
 */
int _mysetenv(info_t *info)
{
	if (info->argc != 3)
	{
		_eputs("Incorrect number of arguements\n");
		return (1);
	}
	if (_setenv(info, info->argv[1], info->argv[2]))
		return (0);
	return (1);
}

/**
 * _myunsetenv - Remove an environment variable
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 * Return: Always 0
 */
int _myunsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguements.\n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
		_unsetenv(info, info->argv[i]);

	return (0);
}

/**
 * populate_env_list - populates env linked list
 * @info: Structure containing potential arguments. Used to maintain
 *          constant function prototype.
 * Return: Always 0
 */
int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; environ[i]; i++)
		add_node_end(&node, environ[i], 0);
	info->env = node;
	return (0);
}
>>>>>>> ef1c2b730e27c0d716be85c2b48015ffe87ecdbe
