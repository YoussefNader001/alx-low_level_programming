#include "lists.h"

/**
 * listint_len - the number of elements in a linked list_t list
 *
 * @h: list to browse
 *
 * Return: size of the list
 */

size_t listint_len(const listint_t *h){
    int count = 0;
    while(h){
        count ++;
        h = h->next;
    }
    return (count);
}
