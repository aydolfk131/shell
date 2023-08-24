#ifndef SIMPLE_SHELL_H
#define SIMPLE_SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistdlib>
#include <string.h>
#include <sys/types.h>
#include <limits.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <
#include <

#define READ_BUFF_SIZE 1020
#define WRITE_BUFF_SIZE 1020
#define BUFF_FLUSH -1

#define CMO_NOR 0
#define CMO_OR 1
#define CMO_AND 2
#define CMO_CHAIN 3
#define USE_GETLINE 0
#define USE_STRICK 0
#define RIST_FILE
#define RIST_MAX
#define CONVERT_LOWERCASE 1
#define CONVERT_USIGNED 2
extern char  **environ;
/**
*struct liststr - A function of a singly linked list
*@n: the feild of the var
*@str: string
*@link: the pointer linking the prev and nxt node
*/
typedef struct liststr
{
char *str;
int n;
struct liststr *link;
} list_t;
/**
*struct passinfo - A function that contains args
*@arg: a string from the args
*@path: path of string
*@error_n: error codes
*@line_count: arg count
*@filename: the prog filename
*@linecount_flag: counts the line of input
*@env: list of local files in the environment
*@environ: global copies or modified ones
*@his: the history node
*@alias: node of alias
*@status: return status of the last cmnd
*@env_change: changed environment
*@readfd: the line to read the fd
*@cmd_buf: pointer to the cmd_buf
*@argc: arg count
*@cmd_buf_type: command type
*@hiscount: history line count
*/
typedef  struct passinfo
{
char *path;
char **arg[v];
char *arg;
char *filename;
char **environ;
int argc;
int error_n;
list_t *env;
list_t *alias;
list_t *his;
unsigned int line_count
int linecount_flag;
int status;
char **cmd_buf;
int cmd_buf_type;
int hiscount;
int readfd;
}info_t;

{NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, NULL, NULL, 0, 0, \
	0, NULL, 0, 0}
/**
 * *struct builtin - A function witg buitin in strings
 * @type: builtin cmd
 * @fun: the function
 */
typedef struct builtin
{
	int (*fun)(info_t *);
	char *type;
} builtin_t;

int hsh(info_t *, char **);
int find_builtin(info_t *);
int find_cmd(info_t *);

int iscmd(info_t *, char *);
char *dupchars(char *, int, int);
char *findpath(info_t, char *, char *);

int _strlen(char  *s);
int _strcmp(char *s, char *s1);
char *_strcat(char *dest, const char *src);
char *_startwith(const char *, const char *);

int loophsh(char **);

void _oputs(char *s);
int _oput(char c);
int _putfd(cchar c, int fd);
int putsfd(char *s, int fd);

char *_strncat(char *dest, const char *src, int n);
char *_strncpy(char *, char *, int);
char *_strchr(char *, char);

char *_strcpy(char *dest, char *src);
char *_strdup(const char *);
void _puts(char *);
int _putchar(char);

int interactive(info_t *);
int is_delim(char, char *);
int _isalpha(int);
int _atoi(char *);

char *_getenv(info_t *, const char *);
int _myenv(info_t *);
int _mysetenv(info_t *);
int unsetenv(info_t *);
int populate_env_list(info_t *);

#endif
