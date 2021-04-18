#include "list.h"

/**
 * add_node_end - adds a node at the end of a double circular linked list
 * @list: the double circular linked list to insert the node into
 * @str: the string to instert in the node
 * Return: the address of the new insterted node or NULL on failure
 */
List *add_node_end(List **list, char *str)
{
    List *new = NULL, *first = *list, *last = *list;

    new = malloc(sizeof(List));
    if (new == NULL)
        return (NULL);

    new->str = str;

    while (last || last->next || last->next != first)
        last = last->next;
    
    new->next = first;
    new->prev = last;
    if (first)
        first->prev = new;
    
    if (last)
        last->next = new;

    return (new);
}


/**
 * add_node_begin - adds a node at the beginning of a double circular linked
 *                  list
 * @list: the double circular linked list to insert the node into
 * @str: the string to instert in the node
 * Return: the address of the new insterted node or NULL on failure
 */
List *add_node_begin(List **list, char *str)
{
    List *new = NULL, *first = *list, *last = *list;

    new = malloc(sizeof(List));
    if (new == NULL)
        return (NULL);

    new->str = str;

    while (last || last->next || last->next != first)
        last = last->next;
    
    new->next = first;
    new->prev = last;
    if (first)
        first->prev = new;
    
    if (last)
        last->next = new;

    *list = new;

    return (new);
}
