#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void print_list(node_t * head) {
    node_t * current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(node_t ** head) {
    int retval = -1;
    node_t * next_node = NULL;

    if (*head == NULL) {
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

int remove_by_value(node_t ** head, int val) {
    /* TODO: fill in your code here */
    node_t * temp_node = NULL;
    node_t * toRemove = NULL;
    int intToRemove = val;
    
    //if the first element contains the value 'val', then remove the first element
    if((*head)->val == intToRemove){
        temp_node = (*head)->next;
        free(*head);
        *head = temp_node;
        return 0;
    }

    //iterate over the linkedlist in search of the value 'val'
    temp_node = *head;
    while(temp_node->next->val != intToRemove){
        temp_node = temp_node->next;
    }

    toRemove = temp_node->next;
    temp_node->next = temp_node->next->next;
    free(toRemove);
    return 0;        

}

int main() {

    node_t * test_list = (node_t *) malloc(sizeof(node_t));
    test_list->val = 1;
    test_list->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->val = 2;
    test_list->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->val = 3;
    test_list->next->next->next = (node_t *) malloc(sizeof(node_t));
    test_list->next->next->next->val = 4;
    test_list->next->next->next->next = NULL;

    remove_by_value(&test_list, 3);

    print_list(test_list);
}