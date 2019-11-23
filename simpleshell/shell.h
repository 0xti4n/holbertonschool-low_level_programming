#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <ctype.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
* for Holberton project
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
void list_creator(char **paths, list_t **head);
char *concatenate_list(list_t **head, char *cmd);

char *read_line(void);
char **parse_line(char *read, char *del);

void built_in_command(char **args);


int _strlen(char *s);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *str_concat(char *s1, char *s2);
char *_getenv(char *name, char **env);

#endif
