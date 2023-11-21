#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the listint_t list
 * @n: listint_t integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n){

    listint_t *newNode = malloc(sizeof(listint_t));
    newNode->n = n;

    if(newNode == NULL)
        return (NULL);

    listint_t *tmp;
    tmp = *head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp -> next = newNode;
    newNode -> next = NULL;
    return(newNode);
    
}
