#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */

/* Structure definition for a singly linked list node */
typedef struct list_s {
    char *str;           /* String data in the node */
    size_t len;          /* Length of the string */
    struct list_s *next; /* Pointer to the next node in the list */
} list_t;

/* Function prototype for print_list */
size_t print_list(const list_t *h);
int _putchar(char c);

#endif /* LISTS_H */
