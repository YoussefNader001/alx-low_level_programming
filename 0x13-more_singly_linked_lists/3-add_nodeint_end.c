#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the listint_t list
 * @n: listint_t integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n){

    listint_t *newNode;
    newNode = malloc(sizeof(listint_t));
   

    if(newNode == NULL)
        return (NULL);

    newNode->n = n;
    newNode -> next = NULL;
    listint_t *tmp;
    tmp = *head;

    if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp -> next = newNode;
    
    return(newNode);
    
}
