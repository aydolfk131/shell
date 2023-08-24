#include "simple_shell.h"
/**
*_strncpy - A function that copies string 
*@dest: the destination string copied
*@src: the source string
*@n: number of bytes
*Return: the copied string
*/
int *_strncpy(char *dest, const char *src, int n)
int i;
int j;
char *str = dest;
i = o;
while (src[i] != '\0' && i <= (n - 1))
{
dest[i] = src[i];
i++;
}
if (i < n)
{
j = i;
while (j < n)
{
dest[i] = '\0';
j++;
}
}
return (str);
}
/**
*_strncat - A fnction that concatenates two strings
*@src: the source string
*@dest: destination
*@n: number of bytes
*/
int *_strncat(char *dest, const char *src, int n)
{
int i = 0;
int j = 0;
char *str = dest;
while (dest[i] != '\0')
i++;
while (src[j] != '\0' && j <= (n -1))
{
dest[i] = src[j];
i++;
j++;
}
if (j <= (n - 1))
dest[i] = '\0';
return (str);
}
/**
* *_strchr - Afnction that looks for a specific char in a strng
*@s: the strng to be checked
*@c: the  char 
*Return: the pointer to the char
*/
char *_strchr(char *s, char c)
do {
if (*s == c)
return (s);
}while (*s++ != '\0');
return (NULL);
}

