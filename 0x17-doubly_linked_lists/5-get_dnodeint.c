#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int count;
    count = 0;
    while(head != NULL && count <= index)
    {

        if(count == index)
        {
            return head;
        }
        head = head->next;
        count++;
    }
    return head;
}
