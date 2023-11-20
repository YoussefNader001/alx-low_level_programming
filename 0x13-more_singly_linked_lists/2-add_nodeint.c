#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n){
    if(n == NULL)
        return (NULL);
    listint_t *newNode = malloc(siziof(listint_t));
    if (newNode == NULL) 
        return (NULL);
    newNode -> next = *head;
    newNode -> n = n;
    *head = newNode;
    return (*head);
}
