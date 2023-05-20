#include <stdlib.h>
#include <stdio.h>

struct node{
    int value;
    struct node *next;
};

typedef struct node node_gt;

void print_list(node_gt *head){
    node_gt *temp;
    temp = head;

    while(temp != NULL){
        printf("%d -> ", temp->value);
        temp = temp->next;
    }
    if (temp == NULL){
        printf("NULL");
    }
    
    
    
}

node_gt *create_node(int num){
    node_gt *temp;
      temp = malloc(sizeof(node_gt));
      temp->value = num;
      temp->next = NULL;
      

      return temp;
}

node_gt *add_node(node_gt *list, int num){
    node_gt *new_node, *current;
    current = list;

    while (current->next != NULL)
    {
        current = current->next;
    }

    new_node = create_node(num);
    new_node->next = current;
    current= new_node;
    
    return current;
}



int main(void){
node_gt n1, n2, n3, n4;
node_gt *head, *node;
// for(i = 0; i < 25; i++){
// node = create_node(i);
// node->next = head;
//  head = node;
// }

head = add_node(head,14);
head = add_node(head,99);
head = add_node(head,84);
print_list(head);

    return 0;
}
