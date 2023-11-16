#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the length of a string using recursion
 * @s: pointer that has the address of the string
 * Return: the length of the string
 */
int _strlen(const char *s)
{
	unsigned int i = 0;

	if (*s != 0)
	{
		i = _strlen(s + 1);
		return (++i);
	}
	return (i);
}



/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the head of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
    if(str == NULL)
      return (NULL);
    
    list_t *newNode = malloc(sizeof(list_t));
    if (newNode == NULL) 
      return (NULL);

    newNode ->str = strdup(str);  
    newNode->len = _strlen(str);
    newNode->next = *head;
    *head = newNode;	
    return (*head);
}
