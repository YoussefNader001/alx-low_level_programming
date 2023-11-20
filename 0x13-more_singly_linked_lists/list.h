#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;


/* Function prototype for print_list */
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
