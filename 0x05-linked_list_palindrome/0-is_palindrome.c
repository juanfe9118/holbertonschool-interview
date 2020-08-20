#include "lists.h"

/**
 * palindrome_check - checks if a linked list is a palindrome by casting
 * it to an array
 * @head: Pointer to the head of the list
 * @length: length of the linked list
 * Return: 0 if it is not a palindrome and 1 if it is
 */
int palindrome_check(listint_t **head, int length)
{
    int n_array[length], i;
    listint_t *temp = *head;

    for (i = 0; i < length; i++)
    {
        n_array[i] = temp->n;
        temp = temp->next;
    }
    i = 0;
    length--;
    while (i < length)
    {
        if (n_array[i] != n_array[length])
            return (0);
        i++;
        length--;
    }
    return (1);
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: Pointer to the head of the list
 * Return: 0 if it is not a palindrome and 1 if it is
 */
int is_palindrome(listint_t **head)
{
    int l_length = 0;
    listint_t *temp = *head;

    while (temp)
    {
        l_length++;
        temp = temp->next;
    }
    if (l_length <= 1)
        return (1);
    return (palindrome_check(head, l_length));
}
