#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to last element
 * @n: number
 *
 * Return: new last element
 */

listint_t *add_nodeint(listint_t **head, const int n){
    if(head == NULL)
        return (NULL);
    listint_t *newNode = malloc(sizeof(listint_t));
    if (newNode == NULL) 
        return (NULL);
    newNode -> next = *head;
    newNode -> n = n;
    *head = newNode;
    return (newNode);
}
