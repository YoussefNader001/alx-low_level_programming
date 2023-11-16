#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**                                                                                   
 * print_list - Prints all the elements of a list_t list.                             
 * @h: Pointer to the head of the list.                                               
 *                                                                                    
 * Return: The number of nodes.                                                       
 */

size_t list_len(const list_t *h)
{
  size_t count = 0;
  const list_t *ptr;
  ptr = h;

  if (h == NULL)
    return (0);
    
  while(ptr!=NULL){
    ptr = ptr -> next;
    count++;
  }
  return (count);
}
