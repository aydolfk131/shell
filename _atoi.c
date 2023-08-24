#include "simple_shell.h"

/**
 * interactive - A function checking the interactive mode
 * @info: the address
 * Return: 1 on success an 0 when itbfails
 */
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd ==0);
}
/**
 * is_delim - A function checking for the delimetry of char
 * @str: the string to be checked
 * @delim: the delimetry 
 * Return: 1 on success and 0 when it fails
 */
int is_delim(char str, char *delim)
{
	while (*delim)
		if (*delim++ == str)
			return (1);
	return (0);
}
/**
 * _isalpha - A function checking for an alphabet letter
 * @c: the input char
 * Return: 1 on success and 0 when fails
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	       return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
/**
 * _atoi - A function converting alpha ti integer
 * @s: string to be converted
 * Return: 1 on a integer in the string
 */
int _atoi(char * *s)
{
int i;
int sign =  1;
int flag =  0;
int out;
unsigned int res = 0;
for (i = 0; s[i] != '\0'; && flag != 2; i++)
{
if (s[i] == '-')
sign = -1;
if (s[i] >= '0' && s[i] <= '0')
{
flag = 1;
res =10;
res  = (s[i] - '0');
}
else if (flag == 1)
flag =2;
}
if (sign == -1)
out = (res * -1);
else
out = res;
return (out);
}

