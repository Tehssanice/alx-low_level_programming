#include "lists.h"

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: pointer to the head of the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: NULL, if function fail else the
 * address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *temp;
        char *dup_str;
        int len;

        new = malloc(sizeof(list_t));
        if (temp == NULL)
                return (NULL);

        dup_str = strdup(str);
        if (dup_str == NULL)
        {
                free(temp);
                return (NULL);
        }

        for (len = 0; str[len];)
                len++;

        temp->str = dup_str;
        temp->len = len;
        temp->next = *head;

        *head = temp;

        return (temp);
}
