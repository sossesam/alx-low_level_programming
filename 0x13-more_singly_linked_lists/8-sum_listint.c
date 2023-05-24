#include "lists.h"

int sum_listint(listint_t *head)
{
    int sum, num;
    sum = 0;


    while(head != NULL)
    {
        num = head->n;
        sum = sum + num;
        head = head->next;

    }
    return (sum);
}
