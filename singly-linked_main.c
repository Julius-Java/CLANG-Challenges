#include "singly-linked_list.h"

int main() {
    // Write C code here
    struct list *head;
    
    head = malloc(sizeof(struct list));
    head->name = "Jenny";
    head->age = 19;
    head->next = NULL;
    

    add_at_end(head, "Authur", 19);
    add_at_end(head, "James", 20);
    add_at_end(head, "Kelvin", 17);
    
    add_at_pos(head, "Jimmy", 22, 3);

    add_at_pos(head, "Alfred", 22, 1);
    
    print_list(head);

    return 0;
}