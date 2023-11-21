#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the listint_t list
 * Return: nothing
 */

void free_listint(listint_t *head){
    listint_t *tmp;

    while(head != NULL){
        tmp = head->next;
        free(head);
        head = tmp;

    }
}
